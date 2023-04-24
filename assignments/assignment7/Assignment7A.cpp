/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 7A: Ro-Sham-Bo 
*/

#include <iostream>
#include <stdlib.h>
#include <boost/algorithm/string/predicate.hpp>
using namespace std;

class RoshamboPlayer {
public: 
	string m_playerName {};
	//string m_attack {};
	int m_roLimit {};
	int m_shamBoLimit {};

	RoshamboPlayer(string name, int roLimit, int shamBoLimit) {
		m_playerName = name;
		m_roLimit = roLimit;
		m_shamBoLimit = shamBoLimit;
	}

	bool playRound(string playerAttack, string opponentAttack) {
		// Rock
		if (boost::iequals("Ro", playerAttack)) {
			if (boost::iequals("Ro", opponentAttack)) {
				// draw
				return false;
			} else if (boost::iequals("Sham", opponentAttack)) {
				return false;
			} else if (boost::iequals("Bo", opponentAttack)) {
				return true;
			}
		// Paper
		} else if (boost::iequals("Sham", playerAttack)) {
			if (boost::iequals("Ro", opponentAttack)) {
				return true;
			} else if (boost::iequals("Sham", opponentAttack)) {
				// draw
				return false;
			} else if (boost::iequals("Bo", opponentAttack)) {
				return false;
			}
			
		// Scissors
		} else  if (boost::iequals("Bo", playerAttack)) {
			if (boost::iequals("Ro", opponentAttack)) {
				return false;
			} else if (boost::iequals("Sham", opponentAttack)) {
				return true;
			} else if (boost::iequals("Bo", opponentAttack)) {
				// draw
				return false;
			}

		} 

		// should not be reachable, given input sanitization but needs to be here
		// for compilation reasons
		return false;
	}

	string getName() { return m_playerName; }

	string getAttack() { 
		string attack;
		int rand_num = rand() % 100;
		if (rand_num <= m_roLimit) {
			attack = "Ro";
		} else if (rand_num <= m_shamBoLimit) {
			attack = "Sham";
		} else {
			attack = "Bo";
		}
		return attack;
	}
};

bool validString(string test) {
	if (boost::iequals("ro", test)) {
		return true;
	} else if (boost::iequals("sham", test)) {
		return true;
	} else if (boost::iequals("bo", test)) {
		return true;
	} else {
		cout << "Invalid attack!\n";
		return false;
	}
}

int main(int argc, char ** argv) {
	// init rand seed
	srand(time(NULL));

	cout << "[Ro-Sham-Bo Player]\n";
	cout << "Who do you want to face?\n";

	RoshamboPlayer p1{"R. Dorothy", 30, 60};
	RoshamboPlayer p2{"Johnny 5", 40, 85};
	int opponent;
	cout << "1) R. Dorothy\n";
	cout << "2) Johnny 5\n";
	cout << "Opponent: ";
	cin >> opponent;

	bool quit = false;
	if (opponent == 1) {
		cout << "\nYour opponent is R. Dorothy\n";
		do {
			int selection;
			cout << "1) Play a round?\n";
			cout << "2) Quit?\n";
			cout << "Choice: ";
			cin >> selection;
			if (selection == 2) {
				quit = true;
			} else {
				bool valid_string = false;
				string attack;
				do {
					cout << "\nEnter an attack: ";
					cin.ignore();
					getline(cin, attack);
					valid_string = validString(attack);
				}
				while (!valid_string);
				
				string opponentAttack = p1.getAttack();
				bool victory = p1.playRound(attack, opponentAttack);
				cout << p1.getName() << " chose " << opponentAttack
					<< "! You ";
				if (victory) {
					cout << "win!\n";
				} else {
					cout << "lose...\n"; 
				}
			}
		}
		while (!quit);
	} else {
		cout << "\nYour opponent is Johnny 5\n";
		do {
			int selection;
			cout << "1) Play a round?\n";
			cout << "2) Quit?\n";
			cin >> selection;
			if (selection == 2) {
				quit = true;
			} else {
				bool valid_string = false;
				string attack;
				do {
					cout << "\nEnter an attack: ";
					cin.ignore();
					getline(cin, attack);
					valid_string = validString(attack);
				}
				while (!valid_string);
				
				string opponentAttack = p2.getAttack();
				bool victory = p2.playRound(attack, opponentAttack);
				cout << p2.getName() << " chose " << opponentAttack
					<< "! You ";
				if (victory) {
					cout << "win!\n"; 
				} else {
					cout << "lose...\n"; 
				}
			}
		}
		while (!quit);
	}
	
	cout << "Game Over\n";	
	return 0;
}
