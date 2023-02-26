/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 6A: Largest of 10
*/
#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	cout << "Please enter 10 numbers and this program will display the largest." << endl << endl;
	int max = 0;

	for (int index = 1; index <= 10; index++) {
		cout << "Please enter number " << index << ": ";
		int response;
		cin >> response;
		if (response > max) {
			max = response;
		}
	}

	cout << "\nThe largest number was " << max << '\n';

	return 0;
}
