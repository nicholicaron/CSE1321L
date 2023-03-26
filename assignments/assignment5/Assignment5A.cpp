/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 5A: Hospital Directory
*/
#include <iostream>
using namespace std;

// Global DB: 
string g_first_names[5] = {"Mark", "Amanda", "Norman", "Steve", "Jesse"};
string g_last_names[5] = {"Sloan", "Bentley", "Briggs", "Sloan", "Travis"};
int g_ages[5] = {67, 33, 47, 35, 24};
string g_occupations[5] = {"Chief of Internal Medicine", "Pathologist",
	"Administrator", "Hospital Security", "Surgeon Intern"};
bool g_has_license[5] = {true, true, false, false, true};

void print_employee(int id) {
	cout << '#' << id << ": " << g_first_names[id] << ' ' << 
		g_last_names[id] << ", Age " << g_ages[id] << ", "
		<< g_occupations[id] << ", Medical License: ";
	if (g_has_license[id]) {
		cout << "TRUE\n";
	} else {
		cout << "FALSE\n";
	}
}

int main(int argc, char ** argv) {
	cout << "[Community General Hospital Directory]\n";

	int selection;
	
	while (selection != 4) {
		cout << "1) List all employees\n";
		cout << "2) Search employee records by ID\n";
		cout << "3) Search employee records by Last Name\n";
		cout << "4) Quit\n";
		cout << "Choice: ";
		cin >> selection;
		
		switch (selection) {
			case 1: 
				for (int id=0; id<5; id++) {
					print_employee(id);
				}
				break;
			case 2:
				{
					int id;
					bool valid_id = false;
					while (!valid_id) {
						cout << "ID: ";
						cin >> id;
						if (id >= 0 && id <= 4) {
							valid_id = true;	
						} else {
							cout << "Invalid ID!\n";
						}
					}
					print_employee(id);
					break;
				}
			case 3: 
				{
					string last_name;
					cout << "Last Name: ";
					cin >> last_name;
					bool found = false;
					for (int id=0; id<5; id++) {
						if (g_last_names[id] == last_name) {
							found = true;
							print_employee(id);
						}
					}
					if (found == false) {
						cout << "No Records Found!\n";
					}
					break;
				}
			case 4: 
				cout << "[Closing Directory...]\n";
				break;
			default:
				cout << "No option " << selection << "!\n";
				break;
		}
		cout << '\n';
	}
	
	return 0;
}

