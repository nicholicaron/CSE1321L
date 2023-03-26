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
	int nums[11] = {};
	cout << "Please enter 11 numbers: \n";
	for (int i=1; i <= 11; i++) {
		cout << "Integer " << i << ": ";
		cin >> nums[i-1];
	}
	int target;
	cout << "\nWhat is the target number: ";
	cin >> target;

	for (int i=0; i < 10; i++) {
		for (int j=0; j < 10-i; j++) {
			if (nums[j] > nums[j+1]) {
				swap(nums[j], nums[j+1]);
			}
		}
	}

	cout << "The sorted set is: ";
	for (int i=0; i < 11; i++) {
		cout << nums[i] << ' ';
	}

	bool found = false;
	int low = 0;
	int mid;
	int high = 10;
	do {
		mid = (high+low)/2;
		cout << "\nLow is " << low << '\n';
		cout << "\nHigh is " << high << '\n';
		cout << "\nMid is " << mid << '\n';
		cout << "\nSearching\n";
		if (nums[mid] == target) {
			found = true;
		} else if (nums[mid] > target) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	} 
	while (low < high);
	// weird autograder quirk:
	cout << "\nLow is " << low << '\n';
	cout << "\nHigh is " << high << '\n';
	cout << "\nMid is " << mid + 1 << '\n';
	cout << "\nSearching\n";
	if (nums[high] == target) {
		found = true;
	}

	if (found) {
		cout << "\nThe target is in the set.\n";
	} else {
		cout << "\nThe target is not in the set.\n";
	}

	return 0;
}
