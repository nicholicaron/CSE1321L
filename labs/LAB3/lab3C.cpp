/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 3C
*/

// 
// MAKE THIS PRINT ON REPL.IT
//

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	int num_quarters, num_dimes, num_nickels, num_pennies, total_cents;
	float value_quarters, value_dimes, value_nickels, value_pennies;

	cout << "Enter the number of quarters: ";
	cin >> num_quarters;
	value_quarters = num_quarters * 25;

	cout << "Enter the number of dimes: ";
	cin >> num_dimes;
	value_dimes = num_dimes * 10;

	cout << "Enter the number of nickels: ";
	cin >> num_nickels;
	value_nickels = num_nickels * 5;

	cout << "Enter the number of pennies: ";
	cin >> num_pennies;
	value_pennies = num_pennies * 1;

	total_cents = value_quarters + value_dimes + value_nickels + value_pennies;

	cout << "Your total is " << total_cents / 100 << " dollars and " << 
		total_cents % 100 << " cents.\n"; 
	return 0;
}
