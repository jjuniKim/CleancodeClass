#include <iostream>
#include <stdio.h>
#define interface struct
using namespace std;


interface Socket {
	virtual void plugIn() = 0; // ���� ���� �Լ�
	virtual void unPlug() = 0;
};


// Interface ��üȭ �Ѵ�. (realization)
class Samsang : public Socket {
public:
	void plugIn() override { //override �� ��þ�. Ư���� ��� x
		enable330V();
	}

	void unPlug() override {
		disable330V();
	}

	void enable330V(){
		std::cout << "����\n";
	}

	void disable330V() {
		std::cout << "��\n";
	}

};

class Dansang : public Socket {
public:
	void plugIn() override{	go220V(); }
	void unPlug() override { off220V(); }
	void go220V() {	std::cout << "220V\n"; }
	void off220V() { std::cout << "Bye 220\n";}
};


class Factory {
public:
	void *makeSock(string name){
		if (name == "dansang") return new Dansang();
		if (name == "samsang") return new Samsang();
		return nullptr;
	}
};


class House { 
public:
	void tvOn(Socket* sock) {
		sock->plugIn();
		std::cout << "��ճ� ��ձ�\n";

	}

	void tvOff(Socket* sock) {
		sock->unPlug();
		std::cout << "�ȳ�TV\n";
	}

};


// Ȯ�强�� ����� ����
int main(int argc, char* argv[]){
	House* house = new House();
	Factory* fac = new Factory();
	house->tvOn((Socket*)fac->makeSock("dansang"));
}
