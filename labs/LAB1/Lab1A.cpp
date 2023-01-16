/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 1
*/

// Lab1A
// Demonstrate the difference of include endl (endline)
// Prints two lines of output representing a rocket countdown

#include <iostream>
using namespace std;

int main(int argc, char ** ** argv) {
	cout << "Three... ";
	cout << "Two... ";
	cout << "One... ";
	cout << "Zero ... ";
	cout << "Liftoff!" << endl;
	// appears on the first line
	cout << "Houston, we have a problem." << endl << endl;
	return 0;
}

