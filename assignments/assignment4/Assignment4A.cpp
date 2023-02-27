/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 4A 
*/

#include<iostream>
using namespace std;

int main(int argc, char ** argv) {
	cout << "What loop do you want to use?\n";
	cout << "1) A loop that might run zero or more times\n";
	cout << "2) A loop that will always run at lease once\n";
	cout << "3) A loop with a predetermined start and end\n";

	int selection, start, end = 0;
	cin >> selection;
	
	switch (selection) {
		case 1: 
			cout << "What's your start number? ";
			cin >> start;
			while (start >= 0) {
				cout << start << ", ";
				start--;
			}
			break;
		case 2:
			cout << "What's your start number? ";
			cin >> start;
			do {
				cout << start << ", ";
				start--;
			} 
			while (start >= 0);
			break;
		case 3: 
			cout << "What's your start number? ";
			cin >> start;
			cout << "What's your end number? ";
			cin >> end;
			cout << "Counting: ";
			for (int index = start; index >= end; index--) {
				cout << index << ", ";
			}
			break;
	}
	
	return 0;
}
