/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 3B 
*/

// Image Color Depth

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	int width, height, size;
	cout << "[Image Encoding Checker]\n";

	cout << "What is the image width? ";
	cin >> width;
	
	cout << "What is the image height? ";
	cin >> height;

	cout << "What is the file size (in bytes)? ";
	cin >> size;

	// Width and height should be positive
	// Size should be some multiple of (height*width)
	if (width <=0 || height <= 0 || size % (width*height) != 0) {
		cout << "The information is invalid - please re-enter it.\n";
		return 0;
	// Size = 3C * (height*width) 
	// BPC = 8*C
	} else switch (size / (3*height*width)) {
		case 1: 
			cout << "The RGB image is encoded with 8 bits per channel.\n";
			break;
		case 2: 
			cout << "The RGB image is encoded with 16 bits per channel.\n";
			break;
		case 3:
			cout << "The RGB image is encoded with 24 bits per channel.\n";
			break;
		default: 
			cout << "Unable to read this encoding [outside of range].\n";
			break;
	}
	return 0;
}
