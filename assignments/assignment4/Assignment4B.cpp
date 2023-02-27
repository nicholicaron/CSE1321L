/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 4B
*/

#include<iostream>
using namespace std;

int main(int argc, char ** argv) {
	int size_square, size_border, color_square, color_border;
	do {
		cout << "Enter the size of the square: ";
		cin >> size_square;
		if (size_square < 0) {
			cout << "Invalid input!\n";
		}
	} 
	while (size_square < 0);
	
	do {
		cout << "Enter the size of the border: ";
		cin >> size_border;
		if (size_border < 0) {
			cout << "Invalid input!\n";
		}
	} 
	while (size_square < 0);
	
	do {
		cout << "Enter the color of the square: ";
		cin >> color_square;
		if (!(color_square == 0 || color_square == 1)) {
			cout << "Invalid input!\n";
		}
	} 
	while (!(color_square == 0 || color_square == 1));
	
	do {
		cout << "Enter the color of the border: ";
		cin >> color_border;
		if (!(color_border == 0 || color_border == 1)) {
			cout << "Invalid input!\n";
		}
	} 
	while (!(color_border == 0 || color_border == 1));

	cout << "PBM File Contents:\nP1\n";
	int dim = (2 * size_border) + size_square;
	cout << dim << ' ' << dim << '\n'; 
	// top border
	for (int h = 0; h < size_border; h++) {
		for (int corner = 0; corner < size_border; corner++) {
			cout << color_border << ' ';
		}
		for (int middle = 0; middle < size_square; middle++) {
			cout << color_border << ' ';	
		}
		for (int corner = 0; corner < size_border; corner++) {
			cout << color_border << ' ';
		}
		cout << '\n';
	}

	// Middle [border][content][border]
	for (int h = 0; h < size_square; h++) {
		for (int border = 0; border < size_border; border++) {
			cout << color_border << ' ';
		}
		for (int content = 0; content < size_square; content++) {
			cout << color_square << ' ';
		}
		for (int border = 0; border < size_border; border++) {
			cout << color_border << ' ';
		}
		cout << '\n';
	}
	
	// bottom border
	for (int h = 0; h < size_border; h++) {
		for (int corner = 0; corner < size_border; corner++) {
			cout << color_border << ' ';
		}
		for (int middle = 0; middle < size_square; middle++) {
			cout << color_border << ' ';	
		}
		for (int corner = 0; corner < size_border; corner++) {
			cout << color_border << ' ';
		}
		cout << '\n';
	}


	return 0;
}
