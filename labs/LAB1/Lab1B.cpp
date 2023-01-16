/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 1
*/

// Lab1B
// Demonstrate reading a string from the user.
// Reads a character string from the user and prints it. 

#include <string>
#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	string message;
	cout << "Enter a line of text: ";
	getline(cin, message);
	cout << "You wrote '" << message << "'" << endl;
	return 0;
}

