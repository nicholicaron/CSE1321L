/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 2
*/

// Lab 2C

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	int width, height, area, perimeter;
	cout << "Enter a width: ";
	cin >> width;
	cout << "Enter a height: ";
	cin >> height;
	area = width * height;
	perimeter = 2*(height + width);
	cout << "The area is " << area << '\n';
	cout << "The perimeter is " << perimeter << '\n';
	return 0;
}
