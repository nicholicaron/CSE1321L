/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 6A: Benchmark Test for Searching
*/

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char ** argv) {
	const int length = 1000019;
	int* arr = new int[length];
	for (int i = 0; i < length; i++) {
		arr[i] = length - i;
	}

	srand(time(NULL));
	int target = rand() % length;

	cout << "[Linear Vs. Binary Search] \n";
	cout << "The target value is " << target << '\n';

	// Linear Search
	int linear_counter = 0;
	for (int search = length-1; search >= 0; search--) {
		linear_counter++;
		if (arr[search] == target) {
			break;
		}
		
	}

	// Binary Search
	int binary_counter = 0;
	bool found = false;	
	int low = 0;
	int mid;
	int high = length - 1;
	do {
		binary_counter++;
		mid = (high + low)/2;
		if (arr[mid] == target) {
			low = high;
		} else if (arr[mid] < target) {
			high = mid -1;
		} else {
			low = mid + 1;
		}
	} 
	while (low < high);

	cout << "Linear Search: " << linear_counter << " loop(s)\n";
	cout << "Binary Search: " << binary_counter << " loop(s)\n";
	if (linear_counter < binary_counter) {
		cout << "Linear Search is faster this time!\n";
	} else if (binary_counter < linear_counter) {
		cout << "Binary Search is faster this time!\n";
	} else {
		cout << "Linear and Binary search took the same amount of iterations!\n";
	}
	
	return 0;
}
