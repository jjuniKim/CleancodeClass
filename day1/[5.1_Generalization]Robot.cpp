#include <iostream>

using namespace std;

class Robot {
public:
	int hp;
	void move() { std::cout << "이동하다"; }
	void stop() { std::cout << "멈추다"; }
};

class SpeedRobot : public  Robot {
private:

public:
	int modelID;
	void run(){	std::cout << "달리다"; }
	void walk(){ std::cout << "걷다"; }

};


class PowerRobot : public Robot{
private:
public:
	int mana;
	void attack() {	std::cout << "공격하다"; }
	void jump() { std::cout << "점프"; }
};


int main(int argc, char* argv[]){
	PowerRobot* p = new PowerRobot();
	p->move();
	p->stop();
}
