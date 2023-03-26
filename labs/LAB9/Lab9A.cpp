/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 9A
*/

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	int nums[10] = {};
	cout << "Please enter 10 numbers: \n";
	for (int i=1; i <= 10; i++) {
		cout << "Integer " << i << ": ";
		cin >> nums[i-1];
	}
	int target;
	cout << "\nWhat is the target number: ";
	cin >> target;

	bool found = false;
	for (int i=0; i<10; i++) {
		if (nums[i] == target) {
			found = true;
			break;
		}
	}

	if (found) {
		cout << "\nThe target is in the set.\n";
	} else {
		cout << "\nThe target is not in the set.\n";
	}

	return 0;
}
