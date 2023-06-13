#include<iostream>

//= Server Code =====================================================================//

class Zergling {
public:
	int hp = 80;
	int mana = 2000;

	void attack(){
		hp += 1;
		mana -= 10;
	}

	void move(){
		hp -= 10;
		mana += 5;
	}

	void status(){
		std::cout << hp << " " << mana << std::endl;
	}
};



//= Client Code =====================================================================//
// <�ʱ�ȭ ���>
// int a = 10;
// int b(20);
// int c{ 20 }; // Unit �ʱ�ȭ

int main(int argc, char* argv[]){
	Zergling* z1 = new Zergling();
	z1->attack();
	z1->status();

}
