/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 7A
*/

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	int dim;
	cout << "Please enter a value for the size: ";
	cin >> dim;

	cout << "This is the requested " << dim << 'x' << dim << " box:\n";
	for (int outer = 0; outer < dim; outer++) {
		for (int inner = 0; inner < dim; inner++) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}
