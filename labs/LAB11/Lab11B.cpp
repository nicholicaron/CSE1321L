/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 11B
*/

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	bool eight_chars = false;
	bool has_upper = false;
	bool has_digit = false;
	string password;
	cout << "Enter a password: ";
	getline(cin, password);

	int char_count = 0;
	for (char& c : password) {
		char_count++;
		int ascii_value = (int) c;
		if ((c >= 65) && (c <= 90)) {
			has_upper = true;
		} else if ((c >= 48) && (c <= 57)) {
			has_digit = true;
		}
	}
	if (char_count >= 7) {
		eight_chars = true;
	}

	bool valid_pw = (eight_chars && has_upper && has_digit); 

	if (valid_pw) {
		cout << "Valid password\n";
	} else {
		cout << "Invalid password\n";
	}

	cout << "\nProgram Ends\n";


	return 0;
}
