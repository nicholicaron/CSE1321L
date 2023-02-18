/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 4B
*/

// 
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char ** argv) {
	string day;
	cout << "Enter the day: ";
	cin >> day;

	// Again, this code assumes further input sanitization and would likely
	// benefit from corner case handling (e.g. if user inputs gibberish,
	// or if the capitalization is somewhere other than the first letter)
	// 
	// For the first case, I would add another else-if to specifically handle
	// the other days. For the second case, I would include the 
	// boost/algorithm/string/predicate.hpp header and use its iequals method
	// 
	// Also, since C++ switch statements can only be used for matching ints
	// we use compound-conditional if statements

	if (day == "Monday" || day == "monday" || day == "Wednesday" || day == "wednesday") 
		{cout << "I have class today!\n";}
	else if (day == "Friday" || day == "friday")
		{cout << "It's Friday! Friday! Gotta get down on Friday!\n";}
	else {cout << "I should use this time to do my homework.\n";}
	return 0;
}
