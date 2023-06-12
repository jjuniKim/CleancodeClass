#include<iostream>
#include<vector>
using namespace std; 

struct Point2D {
	int x; 
	int y; 
};

class PointDrawMachine {
public : 
	void addPoint(Point2D pnt) {
		pnt_arr.push_back(pnt); 
	}

	void drawButton() {
		for (Point2D pnt : pnt_arr) {
			cout << pnt.x << " " << pnt.y << endl; 
		}
	}

private: 
	vector<Point2D> pnt_arr; 
};


int main()
{
	

	return 0; 
}