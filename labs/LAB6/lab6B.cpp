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
  int response, guess;
  cin >> response;
  int attempts = 0;
  bool guessed_correct = false;
  srand((unsigned)time(0));

  // super inefficient implementation, to optimize I'd push my guesses to a hashmap to check for duplicate guesses
  while (response >= 0 && response <=1000 && guessed_correct == false) {
    guess = (rand() % 1000);
    cout << "My guess was " << guess << '\n';
    ++attempts;
    if (guess == response) {
      cout << "I guessed the number was " << guess << " and it only took me "  << attempts << " guesses\n";
      guessed_correct = true;
    }
  }

	return 0;
}
