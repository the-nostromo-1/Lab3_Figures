// Ask the user for figure size and paint character
// and then print figures of user-supplied size and character
// David Tinley
// 09/13/2022

#include <iostream>

using namespace std;

int main() {

	int user_number;
	char user_character;

	cout << "Please enter a number: \n";
	cin >> user_number;

	cout << "Please enter a character: \n";
	cin >> user_character;

	cout << "First Figure:\n";
	cout << "_____________\n\n";

	for (int i = 0; i < user_number; ++i) {
		for (int j = 0; j < user_number; ++j) {
			cout << user_character;
		}
		cout << "\n";
	}
	cout << "\n";

	cout << "Second Figure:\n";
	cout << "______________\n\n";

	for (int i = 0; i < user_number; ++i) {
		for (int j = 0; j < user_number; ++j) {
			if (i == 0) {
				cout << user_character;
			}
			else if (j == 0) {
				cout << user_character;
			}
			else if (i == (user_number - 1)) {
				cout << user_character;
			}
			else if (j == (user_number - 1)) {
				cout << user_character;
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
	cout << "\n";

	cout << "Third Figure:\n";
	cout << "_____________\n\n";

	for (int i = 0; i < user_number; ++i) {
		for (int j = 0; j < user_number; ++j) {
			if (i == j) {
				cout << user_character;
			}
			else if (i != j) {
				cout << " ";
			}
		}
		cout << "\n";
	}
	cout << "\n";

	cout << "Fourth Figure:\n";
	cout << "_____________\n\n";

	for (int i = 0; i < user_number; ++i) {
		for (int j = 0; j < user_number; ++j) {
			if ((i + j) == (user_number - 1)) {
				cout << user_character;
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
	cout << "\n";

	cout << "Fifth Figure:\n";
	cout << "_____________\n\n";

	for (int i = 0; i < user_number; ++i) {
		for (int j = 0; j < (user_number * 2); ++j) {
			if (j == (user_number - i) - 1) {
				cout << user_character;
			}
			else if (j == (user_number + i) - 1) {
				cout << user_character;
			}
			else if (i == (user_number - 1) && j < ((user_number * 2) - 1)) {
				cout << user_character;
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
	cout << "\n";
}