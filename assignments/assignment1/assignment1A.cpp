/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 1A  
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char ** argv) {
	int r, g, b;
	int inverted_r, inverted_g, inverted_b;
	float inverted_r_float, inverted_g_float, inverted_b_float;

	cout << "Enter a red value (0-255): ";
	cin >> r;
	cout << "Enter a green value (0-255): ";
	cin >> g;
	cout << "Enter a blue value (0-255): ";
	cin >> b;
	
	inverted_r = 255 - r;
	inverted_g = 255 - g;
	inverted_b = 255 - b;

	cout << "The inverted color is red=" << inverted_r << ", green=" << 
		inverted_g << ", blue=" << inverted_b << '\n';
	
	inverted_r_float = static_cast<float>(inverted_r) / 255;
	inverted_g_float = static_cast<float>(inverted_g) / 255;
	inverted_b_float = static_cast<float>(inverted_b) / 255;

	cout << setprecision(4);
	cout << "With floating points, that would be red=" << inverted_r_float
		<< ", green=" << inverted_g_float << ", blue=" << inverted_b_float
		<< '\n';
	return 0;
}
