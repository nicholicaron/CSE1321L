/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 6C: Overloaded Functions
*/



int main(int argc, char ** argv) {
	cout << "[Overloaded Surprise Function]\n";
	cout << "What data type do you want to enter? ";
	string selection = cin.getline();
	if (selection == "char") {
		char v1, v2;	
	} else if (selection == "boolean") {
		bool v1, v2;
	} else if (selection == "float") {
		float v1, v2;
	} else if (selection == "integer") {
		int v1, v2;
	} else if (selection == "double") {
		double v1, v2;
	}
	return 0;
}
