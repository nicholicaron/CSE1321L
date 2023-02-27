/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 7C: Right-Triangle (Left)
*/

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	int dim;
	cout << "Please enter a value for the size: ";
	cin >> dim;

	cout << "This is the requested " << dim << 'x' << dim << " right-triangle:\n";
	for (int outer = 1; outer <= dim; outer++) {
		for (int difference = dim; difference > outer; difference--) {
			cout << ' ';
		}
		for (int inner = 1; inner <= outer; inner++) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}
