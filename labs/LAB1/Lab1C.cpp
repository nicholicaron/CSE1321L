/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 1
*/

// Lab1C
// Demonstrate the use of the cin, or the standard input stream to read numeric
// data
// Calculates fuel efficiency based on values entered by the user.

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	int miles;
	double gallons, mpg;
	cout << "Enter the number of miles: ";
	cin >> miles;

	cout << "Enter the gallons of fuel used: ";
	cin >> gallons;

	mpg = miles / gallons;
	cout << "Miles Per Gallon: " << mpg << endl << endl;
	return 0;
}

