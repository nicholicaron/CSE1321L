/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 3B
*/

// 
// MAKE THIS PRINT ON REPL.IT
//

#include<iostream>
using namespace std;


int main(int argc, char ** argv) {
	float hours1, hours2, hours3, hours4, grade1, grade2, grade3, grade4;
	
	cout << "Course 1 hours; ";
	cin >> hours1;
	cout << "Grade for course 1: ";
	cin >> grade1;

	cout << "Course 2 hours; ";
	cin >> hours2;
	cout << "Grade for course 2: ";
	cin >> grade2;

	cout << "Course 3 hours; ";
	cin >> hours3;
	cout << "Grade for course 3: ";
	cin >> grade3;

	cout << "Course 4 hours; ";
	cin >> hours4;
	cout << "Grade for course 4: ";
	cin >> grade4;

	float total_hours, quality_points, gpa;
	
	total_hours = hours1 + hours2 + hours3 + hours4;
	quality_points = grade1*hours1 + grade2*hours2 + grade3*hours3 
		+ grade4*hours4;
	gpa = quality_points / total_hours; 

	cout << "Total hours is: " << total_hours << '\n';
	cout << "Total quality points: " << quality_points << '\n';
	cout << "Your GPA for this semester is " << gpa << '\n';

	return 0;
}
