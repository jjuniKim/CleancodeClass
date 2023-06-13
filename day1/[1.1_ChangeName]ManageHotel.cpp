#include<iostream>
#include<vector>
using namespace std; 

void DecreaseDayAtRoom(vector<int>& rooms) {
	for (int roomIndex = 0; roomIndex < rooms.size(); roomIndex++){
		int leftRoomDays = rooms[roomIndex];
		if (leftRoomDays == 0) continue; 
		rooms[roomIndex] = rooms[roomIndex] - 1;
	}
}


int main() {
	

	return 0; 
}  