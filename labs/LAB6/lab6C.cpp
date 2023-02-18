/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 6C: Cha-Ching
*/

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
  int balance = 1000;
  cout << "Welcome!\nYou have $" << balance << " in your account.\n";

  char sentinel = 'Y';
  while (sentinel == 'Y' || sentinel == 'y' ) {
    cout << "\nMenu\n" << "0 - Make a deposit\n" << "1 - Make a withdrawal\n" << "2 - Display account value\n";
    cout << "\nPlease make a selection: ";
    int selection;
    cin >> selection;
    switch (selection) {
      case 0: {
        cout << "How much would you like to deposit? : ";
        int deposit;
        cin >> deposit;
        balance += deposit;
	cout << "Your current balance is $" << balance << '\n';
        break;
      }
      case 1: {
        cout << "How much would you like to withdraw? : ";
        int withdrawal;
        cin >> withdrawal;
        balance -= withdrawal;
	cout << "Your current balance is $" << balance << '\n';
        break;
      }
      case 2: {
	cout << "Your current balance is $" << balance << '\n';
        break;
      }
      default: {
        cout << "Invalid Entry, please try again.\n";
	break;
      }
    }

    cout << "Would you like to return to the main menu (Y/N)? : ";
    cin >> sentinel;
  }

  cout << "\nThank you for banking with us!\n";

	return 0;
}
