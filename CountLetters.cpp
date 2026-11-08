// CountLetters.cpp - Anna Myers - November 5, 2026
// Description: Counts upper and lower case letters in a string.
// Repeats until an empty string is entered. 

#include <iostream>
#include <string>

using namespace std;

// Function Prototype
int count_letters(string str);
int count_lower(string str);
int count_upper(string str);

int main(void) {
	string input;
	cout << "Enter a string (empty to quit): ";
	getline(cin, input);
	while (input != "") {
		cout << "Letters: " << count_letters(input) << endl;
		cout << "Lower case: " << count_lower(input) << endl;
		cout << "Upper case: " << count_upper(input) << endl;
		cout << "Enter a string (empty to quit): ";
		getline(cin, input);
	}
	return 0;
}

// Returns the number of letters (a-z, A-Z) in string
int count_letters(string str) {
	int count = 0;
	for (int i = 0; i < (int)str.length(); i++) {
		char c = str[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			count++;
		}
	}
	return count;
}

// Returns the number of lower case letters in string
int count_lower(string str) {
	int count = 0;
	for (int i = 0; i < (int)str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			count++;
		}
	}
	return count;
}

// Returns the number of upper case letters in string
int count_upper(string str) {
	int count = 0;
	for (int i = 0; i < (int)str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			count++;
		}

	}
	return count;
}
	