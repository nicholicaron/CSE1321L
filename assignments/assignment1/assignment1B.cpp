/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 1B  
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char ** argv) {
	string item1, item2;
	int quantity1, quantity2;
	float price1, price2, intermediate_price1, intermediate_price2;
	
	cout << "What're you buying? ";
	getline(cin, item1, '\n');
	cout << "How many? ";
	cin >> quantity1;
	cout << "What do they cost? ";
	cin >> price1;

	intermediate_price1 = price1 * quantity1;

	cout << "\nWhat else're you buying? ";
	cin.ignore();
	getline(cin, item2, '\n');
	cout << "How many? ";
	cin >> quantity2;
	cout << "What do they cost? ";
	cin >> price2;

	intermediate_price2 = price2 * quantity2;

	float total_cost = intermediate_price1 + intermediate_price2;

	cout << "\nYour list: \n----\n" << item1 << " (" << quantity1 << ")\n" << 
		'$' << price1 << " ($" << intermediate_price1 << " total)" << endl;
	cout << item2 << " (" << quantity2 << ")\n" << '$' << price2 << " ($" << 
		price2 * quantity2 << " total)" << endl <<"Total Cost: $" << 
		total_cost << "\n----\n";

	return 0;
}
