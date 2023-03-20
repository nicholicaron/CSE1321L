/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 8B: N by N
*/

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	int rows, cols;
	cout << "Please enter the number of rows: ";
	cin >> rows;
	cout << "Please enter the number of columns: ";
	cin >> cols;

	cout << "\nI have " << rows << " rows and " << cols << " columns. I need"
		<< " to fill-up " << rows*cols << "spaces.\n";

	cout << "\nThe " << rows << 'x' << cols << " array:\n";

	int fill = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << ++fill << '|';
		}	
		cout << '\n';
	}

	return 0;
}
