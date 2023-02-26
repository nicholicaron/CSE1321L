/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 6B: Pick a number between 1 and 1000
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char ** argv) {
	cout << "Enter a number between 1 and 1000: ";
	cout << endl;
	int response, guess;
	cin >> response;
	int attempts = 0;
	srand((unsigned)time(0));

	// super inefficient implementation, to optimize for time I'd push my guesses to a hashmap to check for duplicate guesses
	while (response > 0 && response <=1000) {
		guess = (rand() % 1000);
		cout << "My guess was " << guess << endl;
		attempts++;
		if (guess == response) {
			cout << "\nI guessed the number was " << guess << " and it only took me "  << attempts << " guesses\n";
			return 0;
		}
	}

	return 0;
}
