/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 4A
*/

// This program allows the end user to query their letter grade by parsing their
// numerical grade

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	float grade_num;
	
	cout << "Enter the score of your exam: ";
	cin >> grade_num;


	// floating point comparisons can get hairy, and require error handling
	// and epsilons but this code assumes some semblance of input sanitizing
	if (97.5 <= grade_num && grade_num <= 100) {cout << "A+\n";}
	else if (94.5 <= grade_num && grade_num < 97.5) {cout << "A\n";}
	else if (91.5 <= grade_num && grade_num < 94.5) {cout << "A-\n";}
	else if (88.5 <= grade_num && grade_num < 91.5) {cout << "B+\n";}
	else if (85.5 <= grade_num && grade_num < 88.5) {cout << "B\n";}
	else if (82.5 <= grade_num && grade_num < 85.5) {cout << "B-\n";}
	else if (79.5 <= grade_num && grade_num < 82.5) {cout << "C+\n";}
	else if (76.5 <= grade_num && grade_num < 79.5) {cout << "C\n";}
	else if (73.5 <= grade_num && grade_num < 76.5) {cout << "C-\n";}
	else if (70.5 <= grade_num && grade_num < 73.5) {cout << "D+\n";}
	else if (67.5 <= grade_num && grade_num < 70.5) {cout << "D\n";}
	else if (64.5 <= grade_num && grade_num < 67.5) {cout << "D-\n";}
	else if (0 <= grade_num && grade_num < 64.5) {cout << "F\n";}
	else {cout << "Failed to parse grade.\n";}

	return 0;
}
