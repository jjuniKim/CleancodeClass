#include <iostream>

using namespace std;

class Phone {
public:
	virtual void call(void) { std::cout << "Calling..."; } // virtual�� �߰��ϸ� SmartPhone���� ������ ���ִ�. c�� �����ϰ� ����.
};

class SmartPhone : public Phone {
public:
	void call(void) { std::cout << "SmartCalling..."; }	// Overriding
	void internet(void){
		
	}
};

class BrickPhone : public Phone {
public:
	void call(void) { std::cout << "BrickCalling..."; }	// Overriding
	void internet(void) {

	}
};

void call1(string name){
	if (name == "brick")
	{
		BrickPhone* p = new BrickPhone();
		p->call();
	}

	if(name =="smart")
	{
		SmartPhone* p = new SmartPhone();
		p->call();
	}
}

void call2(Phone* phone){ //dependency injection
	phone->call();
}

Phone* makePhone(string name) {
	if (name == "brick") return new BrickPhone();
	if (name == "smart") return new SmartPhone();
	return nullptr;
}

int main(int argc, char* argv[]) {
	// C++ �ٸ���� �⺻ = virtual, virtual �Ⱦ��� ������ �ְ�����..? c++���� �ȵȴ�.
	Phone* a = new Phone();
	Phone* b = new SmartPhone();
	//SmartPhone* c = new Phone(); // EEROR!!
	SmartPhone* d = new SmartPhone();

	d->call();
	d->internet();

	// < �������� �̿��� ������� 1 >
	//call1("smart")
	call2(new SmartPhone()); //dependency injection; �������� ���� ������ ����

	// < �������� �̿��� ������� 2 >
	//Factory -> �������� �� ���� ������ �� �ִ�
	Phone* g = makePhone("brick");
}
