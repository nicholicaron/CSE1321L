/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 3A 
*/
// Cretaceous Park Map

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	float x, y;
	cout << "[Cretaceous Park GIS]\n";
	cout << "X Coordinate: ";
	cin >> x;

	cout << "Y Coordinate: ";
	cin >> y;

	// We will slice vertically parallel to the y-axis and evaluate the y
	// value to determine the area

	// Boundary ownership is a bit ambiguous, so we will give ownership to
	// an areas lower bounds to remain consistent with provided test case
	// e.g. (2,2) belongs to T.Rex Lake
	
	//First case is out of bounds case
	if (x > 8.0f || x < 0.0f || y > 8.0f || y < 0.0f) {
		cout << "You have left the boundaries of the park.\n"
			<< "Please return immediately.";
	} else if (x < 2.0f) {
		cout << "You are in the Triceratops Grasslands\n";
	} else if (x >= 2.0f && x < 4.0f) {
		if (y >= 2.0f && y < 6.0f) {
			cout << "You are in T.Rex Lake\n";
		} else {
			cout << "You are in the Triceratops Grasslands\n";
		}
	} else if (x >= 4.0f && x < 5.0f) {
		cout << "You are in the Triceratops Grasslands\n";
	} else if (x >= 5.0f && x < 6.0f) {
		if (y < 2.0f) {
			cout << "You are in the Pterodactyl Aviary\n";
		} else if (y >= 2.0f && y < 5.0f) {
			cout << "You are in the Triceratops grassland\n";
		} else if (y >= 5.0f) {
			cout << "You are in the Deinonychus Pen.\n";
		}
	} else {
		if (y < 2.0f) {
			cout << "You are in the Pterodactyl Aviary\n";
		} else if (y >= 2.0f && y < 4.0f) {
			cout << "You are in the Visitor's Center\n";
		} else if (y >= 4.0f && y < 5.0f) {
			cout << "You are in the Triceratops Grasslands\n";
		} else {
			cout << "You are in the Deinonychus Pen.\n";
		}
	}

	return 0;
}
