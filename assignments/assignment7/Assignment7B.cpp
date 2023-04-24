/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 7B: Color Art Program
*/

#include <iostream>
using namespace std;

class Pixel {
public:
	int m_red {};
	int m_green {};
	int m_blue {};

	Pixel() {
		m_red = 255;
		m_green = 255;
		m_blue = 255;
	}

	Pixel(int red, int green, int blue) {
		m_red = red;
		m_green = green;
		m_blue = blue;
	}

	void changeRGB(int red, int green, int blue) {
		m_red = red;
		m_green = green;
		m_blue = blue;
	}

	void printRGB() {
		cout << m_red << ' ' << m_green << ' ' << m_blue;
	}



};

int main(int argc, char ** argv) {
	cout << "[Color Art Program]\n";
	int width, height, fill_red, fill_green, fill_blue, selection;
	cout << "Enter an image width: ";
	cin >> width;
	cout << "Enter an image height: ";
	cin >> height;
	cout << "Enter the fill color's red value: ";
	cin >> fill_red;
	cout << "Enter the fill color's green value: ";
	cin >> fill_green;
	cout << "Enter the fill color's blue value: ";
	cin >> fill_blue;

	// Initialize image
	Pixel image[width][height] = {};
	for (int i=0; i < height; i++) {
		for (int j=0; j < width; j++) {
			image[i][j] = Pixel{fill_red, fill_green, fill_blue};
		}
	}


	bool quit = false;

	do {
		cout << "\nWhat will you do?\n";
		cout << "1) Fill in a pixel\n";
		cout << "2) Fill in a line\n";
		cout << "3) Print the image\n";
		cout << "4) Quit\n";
		cout << "Choice? ";
		cin >> selection;

		switch (selection) {
			case 1: 
				{
					int row, col, new_red, new_blue, new_green;
					bool valid_replacement = false;
					while(!valid_replacement) {
						cout << "\nRow: ";
						cin >> row;
						cout << "Column: ";
						cin >> col;
						cout << "New Red Color: ";
						cin >> new_red;
						cout << "New Blue Color: ";
						cin >> new_blue;
						cout << "New Green Color: ";
						cin >> new_green;
						if (row <= width && col <= height && 
								(new_red >= 0 && new_red <= 255) &&
								(new_green >= 0 && new_green <= 255) &&
								(new_blue >= 0 && new_blue <= 255)) {
							valid_replacement = true;
						} else {
							cout << "Invalid information!";
						}
					}
					image[row][col] = Pixel{new_red, new_green, new_blue};
					break;
				}
			case 2:
				{
					int row, col, new_red, new_green, new_blue, length;
					string direction;
					bool valid_replacement = false;
					while (!valid_replacement) {
						cout << "\nRow: ";
						cin >> row;
						cout << "Column: ";
						cin >> col;
						cout << "New Red Color: ";
						cin >> new_red;
						cout << "New Green Color: ";
						cin >> new_green;
						cout << "New Blue Color: ";
						cin >> new_blue;
						cout << "Length: ";
						cin >> length;
						cout << "Direction: ";
						cin.ignore();
						getline(cin, direction);

						// We have to perform bounds checks on line to avoid potentially
						// overwriting memory we don't have access to
						bool valid_line;
						if (direction == "up") {
							valid_line = ((row+1) - length >= 0);
						} else if (direction == "down") {
							valid_line = ((row+1) + length <= height);
						} else if (direction == "right") {
							valid_line = ((col+1) - length >= 0);
						} else if (direction == "left") {
							valid_line = ((col+1) + length <= width);
						}
						if (row <= width && col <= height && 
								(new_red >= 0 && new_red <= 255) &&
								(new_green >= 0 && new_green <= 255) &&
								(new_blue >= 0 && new_blue <= 255) &&
								valid_line) {
							valid_replacement = true;
						} else {
							cout << "Invalid information!";
						}
					}

					if (direction == "up") {
						for (int j=0; j <= length; j++) {
							image[row-j][col] = Pixel{new_red, new_green, new_blue};
						}
					} else if (direction == "down") {
						for (int j=0; j<= length; j++) {
							image[row+j][col] = Pixel{new_red, new_green, new_blue};
						}
		
					} else if (direction == "right") {
						for (int i=0; i <= length; i++) {
							image[row][col+i] = Pixel{new_red, new_green, new_blue};
						}
					} else if (direction == "left") {
						for (int i=0; i <= length; i++) {
							image[row][col-1] = Pixel{new_red, new_green, new_blue};
						}
					}
					break;
				}
			case 3:
				{
					cout << "\nPGM Image Contents\n";
					cout << "P3\n";
					cout << width << ' ' << height << '\n';
					cout << "255\n";
					for (int i=0; i < height; i++) {
						for (int j=0; j < width; j++) {
							image[i][j].printRGB();
							cout << ' ';
						}
						cout << '\n';
					}
					break;
				}
			case 4:
				{
					cout << "\n[Exiting Color Art Program]";
					quit = true;
					break;
				}
			default: 
				cout << "No option " << selection << "!\n";
				break;
		}
		cout << '\n';
		
	}
	while (!quit);
	
	return 0;
}
