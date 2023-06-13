#include <stdio.h>

class Calculator {
private:
	int result;
public:
	void plus(int a, int b) { result = a + b; }
	void minus(int a, int b) { result = a - b; }
	void gop(int a, int b) { result = a * b; }
	void divide(int a, int b){
		// valid check
		if (b == 0) {
			std::cout << "ERROR :: READ ME 좀 읽어주세요. \n";
			return;
		}

		result = a / b;
	}

	void showResult(){
		std::cout << result << "\n";
	}

};

int main(int argc, char* argv[]){
	Calculator* cal = new Calculator();

	cal->plus(1, 2);
	cal->divide(5, 0);
	cal->showResult();
}
