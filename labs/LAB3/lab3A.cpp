/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 3A
*/

// 
// MAKE CODE PRINT PROPERLY IN REPL.IT
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char ** argv) {
	float balance, apr, mpr, min_payment;
	cout << "Amount owed: $";
	cin >> balance;
	cout << "APR: ";
	cin >> apr;

	apr /= 100;
	mpr = (apr * 100) / 12;
	min_payment = balance * apr / 12;

	cout << std::setprecision(4) << "Monthly percentage rate: " << mpr << 
		'\n';
	cout << std::setprecision(2) << fixed << "Minimum payment: $" << 
		min_payment << '\n';
	return 0;
}
