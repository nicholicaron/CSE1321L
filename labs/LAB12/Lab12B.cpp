/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Lab#: 12B: My dog can do tricks
*/

#include <iostream>
using namespace std;

class Dog {
	public: 
		int age {};
		double weight {};
		string name {};
		string fur_color{};
		string breed {};

		void bark() {
			cout << "\nWoof! Woof!\n";
		}	

		void rename(string new_name) {
			this->name = new_name;
		}

		void eat(double calories) {
			this->weight += calories;
		}

};

class Lab12B {
	public: 
		void main() {
			Dog dog;
			cout << "You are about to create a dog.\n";	
			cout << "How old is the dog: ";
			cin >> dog.age;
			cout << "How much does the dog weigh: ";
			cin >> dog.weight;
			cout << "What is the dog's name: ";
			cin.ignore();
			getline(cin, dog.name);
			cout << "What color is the dog: ";
			getline(cin, dog.fur_color);
			cout << "What breed is the dog: ";
			getline(cin, dog.breed);

			print(dog);
			dog.bark();
			cout << dog.name << " is hungry, how much should he eat: ";
			double tmp;
			cin >> tmp;
			dog.eat(tmp);
			cout << dog.name << " isn't a very good name. What should" 
				<< " they be renamed to: ";
			cin.ignore();
			getline(cin, dog.name);
			print(dog);
		}

		void print(Dog dog) {
			cout << '\n' << dog.name << " is a " << dog.age << " year old "
				<< dog.breed << " that weighs " << dog.weight 
				<< " lbs.\n";
		}

};

int main(int argc, char ** argv) {
	Lab12B driver;
	driver.main();
	return 0;
}
