/* 
Class: CSE 1321L
Section: WE1
Term: Spring '23
Instructor: Nick Murphy
Name: Nicholi Moore Caron
Assignment#: 6B: Random Sort 
*/

#include <iostream>
#include <algorithm>
using namespace std;

int g_count = 0;

bool check_if_sorted(int *arr) {
	bool sorted = true;

	for (int i = 0; i < 16; i++) {
		if (arr[i] > arr[i+1]) {
			sorted = false;	
		} 
	}
	if (sorted) {
		cout << "Hooray, it's sorted! And it only took " << g_count << 
			"attempts!\n";
	}
	return sorted;
}

int* shuffle_array(int *arr) {
	cout << "\nShuffling array...\n";
	std::random_shuffle(arr, arr+17);
	return arr;
}

void print_array(int *arr) {
	cout << "\nPrinting array...\n";
	for (int i = 0; i < 17; i++) {
		cout << arr[i] << ", ";
	}
	cout << '\n';

	if (!check_if_sorted(arr)) {
		cout << "Not sorted yet!\n";
	}
}

int main(int argc, char ** argv) {
	int arr[17];
	srand(int(NULL));
	for (int i = 0; i < 17; i++) {
		arr[i] = rand() % 359;
	}
	
	cout << "[Random Sort]\n";
	print_array(arr);
	do{
		g_count++;
		shuffle_array(arr);
		print_array(arr);
	} 
	while (!check_if_sorted(arr));
	
	return 0;
}
