/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 1C 
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char ** argv) {
	int day, month_num, year;
	string month_str;

	cout << "Enter the day (number): ";
	cin >> day;
	cout << "Enter the month (number): ";
	cin >> month_num;
	cout << "Enter the month (String): ";
	cin >> month_str;
	cout << "Enter the year (number): ";
	cin >> year;

	cout << "Here are some ways to represent the date: \n";
	cout << month_num << '/' << day << '/' << year << '\n';
	cout << year << '/' << day << '/' << month_num << '\n';
	cout << day << '/' << month_num << '/' << year << '\n';
	cout << month_str << ' ' << day << ", " << year << '\n';
	cout << day << ' ' << month_str << ' ' << year << '\n';
	return 0;
}
