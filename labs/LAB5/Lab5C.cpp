/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 5C
*/

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	// we define quadrant = 0 as the origin, quadrant = 5 as the x-axis 
	// case, and quadrant = 6 as the y-axis case
	int x, y, quadrant;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;

	if (x == 0) {
		// if (0, nonzero): y-axis, else if (0,0): origin
		quadrant = (y != 0? 6:0);
	} else if (y == 0) {
		// if previous case did not execute, and y = 0, point lies on x
		// axis
		quadrant = 5;
	} else if (x > 0) {
		// if (+x,+y), point lies in quadrant 1. else if (+x, -y), point
		// lies in quadrant 4
		quadrant = (y > 0? 1:4);
	} else if (x < 0) {
		// if (-x, +y), point lies in quadrant 2, else if (-x, -y), point
		// lies in quadrant 3
		quadrant = (y > 0? 2: 3);
	}

	switch (quadrant) {
		case 0: 
			cout << "This point is the origin.\n";
			break;
		case 1: 
			cout << "This point is in the first quadrant.\n";
			break;
		case 2: 
			cout << "This point is in the second quadrant.\n";
			break;
		case 3: 
			cout << "This point is in the third quadrant.\n";
			break;
		case 4: 
			cout << "This point is in the fourth quadrant.\n";
			break;
		case 5: 
			cout << "This point is on the x axis.";
			break;
		case 6: 
			cout << "This point is on the y axis.";
			break;
	}

	return 0;
}
