#include <iostream>

using namespace std;

class Robot {
public:
	int hp;
	void move() { std::cout << "�̵��ϴ�"; }
	void stop() { std::cout << "���ߴ�"; }
};

class SpeedRobot : public  Robot {
private:

public:
	int modelID;
	void run(){	std::cout << "�޸���"; }
	void walk(){ std::cout << "�ȴ�"; }

};


class PowerRobot : public Robot{
private:
public:
	int mana;
	void attack() {	std::cout << "�����ϴ�"; }
	void jump() { std::cout << "����"; }
};


int main(int argc, char* argv[]){
	PowerRobot* p = new PowerRobot();
	p->move();
	p->stop();
}
