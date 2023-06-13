#include <iostream>

class BTS {
public:
	int go(){
		int x;
		return 10;
	}
};


class TTT : public BTS {
public:
	explicit TTT(int delta)
		: delta(delta){

	}

private:
	int delta;
};


int hohoho(int d1, int d2){
	return d1 + d2;
}

int get_sum(int d1, int d2){
	return hohoho(d1, d2);
}


void abc(){
	int rest = get_sum(10, 20);
}


int main(int argc, char* argv[])
{
	abc();
	std::cout << "HI";
}