/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 8A
*/

#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
	int arr1[5], arr2[5];
	// array 1 initialization
	cout << "Please enter 5 integers for the first array: \n";
	for (int i = 0; i < 5; i++) {
		cout << "Integer " << i + 1 << ": ";
		cin >> arr1[i];
	}
	// array 2 initialization
	cout << "\nPlease enter 5 integers for the second array: \n";
	for (int i = 0; i < 5; i++) {
		cout << "Integer " << i + 1 << ": ";
		cin >> arr2[i];
	}
	
	// summation
	cout << "\nThe resulting sums are ";
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] + arr2[i] << '|';
	}
	cout << '\n';

	return 0;
}
