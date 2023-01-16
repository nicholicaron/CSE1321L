/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 2
*/

// Lab 2A: MadLibs

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char ** argv) {
	string name1, name2, verb, adverb;		
	cout << "Enter a name: ";
	cin >> name1;
	cout << "Enter another name: ";
	cin >> name2;
	cout << "Enter a verb: ";
	cin >> verb;
	cout << "Enter an adverb: ";
	cin >> adverb;

	cout << "Once upon a time, there was a person named " << name1 << 
		" who had a child named " << name2 << ". This child would " << 
		verb << ' ' <<  adverb  << " while singing to strangers." << 
		'\n';

	return 0;
}
