#include <iostream>
#include <stdio.h>
#define interface struct
using namespace std;


interface Socket {
	virtual void plugIn() = 0; // 순수 가상 함수
	virtual void unPlug() = 0;
};


// Interface 실체화 한다. (realization)
class Samsang : public Socket {
public:
	void plugIn() override { //override 는 명시어. 특별한 기능 x
		enable330V();
	}

	void unPlug() override {
		disable330V();
	}

	void enable330V(){
		std::cout << "찌직\n";
	}

	void disable330V() {
		std::cout << "끝\n";
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
		std::cout << "재밌네 재밌군\n";

	}

	void tvOff(Socket* sock) {
		sock->unPlug();
		std::cout << "안녕TV\n";
	}

};


// 확장성을 고려한 설계
int main(int argc, char* argv[]){
	House* house = new House();
	Factory* fac = new Factory();
	house->tvOn((Socket*)fac->makeSock("dansang"));
}
