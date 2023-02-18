/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 5B
*/

// This program ouputs the smallest divisor (e.g. no remainder) of an integer 
// input by the end-user

#include <iostream>
using namespace std;

static bool divisible = false;

int least_divisor(int input) {
	int divisor = 2;

	// brute force integers from 2 - (input-1)
	// Logical or to evaluate corner case where divisor = input = 2, but 
	// avoid evaluating other cases where input = divisor
	while (divisor < input || input == 2) {
		if (input % divisor == 0) {
			divisible = true;
			return divisor;
		} else {
			divisor++;
		}
	}
	return 1;
}

int main(int argc, char ** argv) {
	cout << "Enter an integer: ";
	
	int input;
	cin >> input;
	
	int result = least_divisor(input);

	// if no divisor greater than 1 exists, the number must be prime 
	if (result != 1) {
		cout << "This number is divisible by " << result << '\n';
	} else {
		cout << "This number is undetermined\n";
	}

	return 0;
}
