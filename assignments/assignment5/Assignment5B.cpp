/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 5B Art Program
*/

#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
	cout << "[KSU Image Manipulation Program]\n";
	int width, height, fill_color, selection;
	cout << "Enter an image width: ";
	cin >> width;
	cout << "Enter an image height: ";
	cin >> height;
	cout << "Enter the fill color: ";
	cin >> fill_color;

	// initialize image
	int image[width][height] = {};
	for (int i=0; i < height; i++) {
		for (int j=0; j < width; j++) {
			image[i][j] = fill_color;
		}
	}

	while (selection!= 4) {
		cout << "What will you do?\n";
		cout << "1) Fill in a pixel\n";
		cout << "2) Fill in a line\n";
		cout << "3) Print the image\n";
		cout << "4) Quit\n";
		cout << "Choice? ";
		cin >> selection;

		switch (selection) {
			case 1: 
				{
					int row, col, new_color;
					bool valid_replacement = false;
					while (!valid_replacement) {
						cout << "\nRow: ";
						cin >> row;
						cout << "Column: ";
						cin >> col;
						cout << "New Color: ";
						cin >> new_color;
						if (row <= width && col <= height && (new_color >= 0 && new_color <= 255)) {
							valid_replacement = true;
						} else {
							cout << "Invalid information!";
						}
					}
					image[row][col] = new_color;
					break;
				}
			case 2: 
				{
					int row, col, new_color, length;
					string direction;
					bool valid_replacement = false;
					while (!valid_replacement) {
						cout << "\nRow: ";
						cin >> row;
						cout << "Column: ";
						cin >> col;
						cout << "New Color: ";
						cin >> new_color;
						cout << "Length: ";
						cin >> length;
						cout << "Direction: ";
						cin.ignore();
						getline(cin, direction);


						// have to perform bounds check on line to avoid potentially 
						// overwriting memory we don't have access to 
						bool valid_line;
						if (direction == "up") {
							valid_line = ((row+1) - length >=0);
						} else if (direction == "down") {
							valid_line = ((row+1) + length <= height);	
						} else if (direction == "right") {
							valid_line = ((col+1) - length >= 0);
						} else if (direction == "left") {
							valid_line = ((col+1) + length <= width);
						}

						
						if (row <= width && col <= height && (new_color >= 0 && new_color <= 255) && valid_line) {
							valid_replacement = true;
						} else {
							cout << "Invalid information!";
						}
					}

					if (direction == "up") {
						for (int j=0; j <= length; j++) {
							image[row-j][col] = new_color;
						}
					} else if (direction == "down") {
						for (int j=0; j <= length; j++) {	
							image[row+j][col] = new_color;
						}
					} else if (direction == "right") {
						for (int i=0; i <= length; i++) {
							image[row][col+i] = new_color;
						}
					} else if (direction == "left") {
						for (int i=0; i <= length; i++) {
							image[row][col-i] = new_color;
						}
					}
					break;
				}
			case 3:
				{
					cout << "\nPGM Image Contents\n";
					cout << "P2\n";
					cout << width << ' ' << height << '\n';
					cout << "255\n";
					for (int i=0; i < height; i++) {
						for (int j=0; j < width; j++) {
							cout << image[i][j] << ' '; 
						}
						cout << '\n';
					}
					break;
				}
			case 4: 
				cout << "\n[Exiting KSU Image Manipulation Program]";
				break;
			default: 
				cout << "No option " << selection << "!\n";
				break;
		}
		cout << '\n';
	}
	
	return 0;
}
