/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 5A
*/

// This program determines if an applicant is eligible to buy a car

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	char response;
	cout << "Do you have a driving permit (Y/N)? \n";	

	cin >> response;

	if (response == 'N' || response == 'n') {
		cout << "Driving permit is a prerequisite to purchase a vehicle!\n";
	} else if (response == 'Y' || response == 'y'){
		cout << "Do you have a commercial driving license (Y/N)?\n";
		
		cin >> response;

		if (response == 'N' || response == 'n') {
			cout << "Commercial driving license is a prerequisite to "
				<< "purchase a vehicle!\n";
		} else if (response == 'Y' || response == 'y') {
			cout << "Congratulations! You can purchase a vehicle, "
				<< "let's start talking options!\n";
		} else {
			cout << "Failed to parse response\n";
		}
	} else {
		cout << "Failed to parse response\n";
	}

	return 0;
}
