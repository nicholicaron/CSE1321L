/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: A Tale of Two Classes
*/

#include <iostream>
#include <boost/algorithm/string.hpp>
using namespace std;

class Chair {
	public:	
		int num_of_legs {};
		bool rolling {};
		string material{};
};

class Lab12A {
	public: 
		void main() {
			int legs;
			string rolls_tmp;
			bool rolls;
			string mat;
			cout << "You are about to create a chair.\n";
			cout << "How many legs does your chair have: ";
			cin >> legs;
			cout << "Is your chair rolling (true/false): ";
			cin.ignore();
			getline(cin, rolls_tmp);
			if (boost::iequals(rolls_tmp, "true")) {
				rolls = true;
			} else {
				rolls = false;
			}
			cout << "What is your chair made of: ";
			getline(cin, mat);
			cout << "\n";

			Chair first { legs, rolls, mat };

			print(first);
			cout << "\nThis program is going to change that.\n";
			first.num_of_legs = 4;
			first.rolling = false;
			first.material = "wood";
			print(first);
		}
		
		void print(Chair first) {
			cout << "\nYour chair has " << first.num_of_legs << " legs, ";
			if (first.rolling) {
				cout << "is rolling, ";
			} else {
				cout << "is not rolling, ";
			}
			cout << "and is made of " << first.material << ".\n";
		}
};

int main() {
	Lab12A driver;
	driver.main();
}
