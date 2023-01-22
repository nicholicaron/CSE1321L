/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 4C
*/

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	float number;
	int selection;
	cout << "Welcome!\nPlease input a number: ";
	cin >> number;
	cout << "\nWhat would you like to do to this number: \n0- Get the additive "
		<< " inverse of the number\n1- Get the reciprocal inverse of the "
		<< "number\n2- Square the number\n3- Cube the number\n4- Exit "
		<< "the program\n" << endl;
	cin >> selection;
	switch (selection) {
		case 0: {
			cout << "The additive inverse of " << number << " is "
				<< (number *= -1) << '\n';
			break;
		}
		case 1: {
			cout << "The reciprocal of " << number << " is " << 
				(1/number) << '\n';
			break;
		}
		case 2: {
			cout << "The square of " << number << " is " << 
				(number * number) << '\n';
			break;
		}
		case 3: {
			cout << "The cube of " << number << " is " << 
				(number * number * number) << '\n';
			break;
		}
		case 4: {
			cout << "Thank you, goodbye!\n"; 
			break;
		}
		default: {
			cout << "Invalid input, please try again!\n";
			break;
		}
	}
	return 0;
}
