/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 11A
*/

#include <iostream>
#include <boost/algorithm/string.hpp>
using namespace std;

int main(int argc, char ** argv) {
	bool cont = true;
	do {
		cout << "Menu\n";
		int selection;
		cout << "0) Hello World\n";
		cout << "1) Goodbye Moon\n";
		cout << "2) Walking on Sunshine\n";
		cout << "\nWhat would you like to do: ";
		cin >> selection;
		switch (selection) {
			case 0:
				cout << "\nHello!\n";
				break;
			case 1: 
				cout << "\nOk, bye.\n";
				break;
			case 2: 
				cout << "\nWHOA!\n";
				break;
		}
		cin.ignore();
		string decision;
		cout << "\nType YES to rerun. ";
		getline(std::cin, decision);
		cont = boost::iequals(decision, "yes");
		cout << '\n';
	}
	while (cont);

	cout << "Program Ends\n";

	return 0;
}
