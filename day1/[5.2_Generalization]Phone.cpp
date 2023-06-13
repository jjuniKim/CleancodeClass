#include <iostream>

using namespace std;

class Phone {
public:
	virtual void call(void) { std::cout << "Calling..."; } // virtual을 추가하면 SmartPhone으로 접근할 수있다. c를 가능하게 해줌.
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
	// C++ 다른언어 기본 = virtual, virtual 안쓰는 이유가 있겠지만..? c++에서 안된다.
	Phone* a = new Phone();
	Phone* b = new SmartPhone();
	//SmartPhone* c = new Phone(); // EEROR!!
	SmartPhone* d = new SmartPhone();

	d->call();
	d->internet();

	// < 다형성을 이용한 구현방법 1 >
	//call1("smart")
	call2(new SmartPhone()); //dependency injection; 의존성이 낮기 때문에 좋음

	// < 다형성을 이용한 구현방법 2 >
	//Factory -> 의존성을 한 곳에 몰아줄 수 있다
	Phone* g = makePhone("brick");
}
