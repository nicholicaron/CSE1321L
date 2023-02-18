/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 3C  
*/

// Decision Trees
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(int argc, char ** argv) {
	string userInput;

	cout << "[Cretaceous Park Dialog]\n";
	cout << "Oh no, the power has gone out at Cretaceous Park! \n";
	cout << "1) What does that mean?\n";
	// The first provided test case does not match this input, but problem 
	// states that we do not have to worry about invalid input
	cout << "2) No, I just turned the light off." << endl;
	getline (cin, userInput);
	if (userInput.compare("No, I just turned the light off.") == 0) {
		cout << "\nOh thank goodness!\n";
		return 0;
	// Again, problem states we don't have to worry about invalid input,
	// so we don't have to explicitly compare userInput against case 2
	} else {
		cout << "\nThe dinosaurs will get loose... again...\n";
		cout << "1) Life finds a way...\n";
		cout << "2) What do we do?\n";
		getline (cin, userInput);
		if (userInput.compare("Life finds a way...") == 0) {
			cout << "\nThat's not helpful right now!\n";
			cout << "We have to evacuate the park!\n";
		} else {
			// I only wrote this print statement twice for formatting
			// reasons, even though it is printed in either branch
			cout << "\nWe have to evacuate the park!\n";
		}
	}
	
	return 0;
}
