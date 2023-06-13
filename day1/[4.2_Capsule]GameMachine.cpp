#include <iostream>
using namespace std;

class GameMachine {
public:
	void InitCondition(){
		if(totalCoin > 10) {
			std::cout << "Total Coin is Max. Let's play the game \n";
			return;
		}
		else if (totalCoin <= 0) {
			std::cout << "No more Coins. Please Insert coins. \n";
			return;
		}
	}

	void inputCoin(int NumCoins){
		InitCondition();

		if(NumCoins > 5) {
			std::cout << "you can input 5 NumCoins at once. Check NumCoins. \n";
			return;
		}

		totalCoin += NumCoins;
	}

	void playGame(){
		InitCondition();
		totalCoin -= 1;
	}

private:
	int totalCoin;
};

int main(int argc, char* argv[]) {
	GameMachine* game_machine = new GameMachine();
	int Coins;
	std::cout << "Insert coins\n";
	std::cin >> Coins;
	game_machine->inputCoin(Coins);
	game_machine->playGame();
}
