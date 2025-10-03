//Write a program to guess 3 letters passwordw

#include<iostream>
#include<string>


using namespace std;


string ReadPassword() {


	string password;
	cout << "Please enter a 3 letter password -all capital-:\n";

	cin >> password;
	return password;
}

bool GuessPassword(string password) {
	int counter = 0;

	string word = "";

	for (int i = 65; i <= 90; i++) {

		for (int j = 65; j <= 90;j++) {
			for (int k = 65; k <= 90;k++) {

				word = word + (char)(i);
				word = word + (char)(j);
				word = word + (char)(k);
				counter++;
				if (word == password) {
					cout << "Password is " << word << " Found after " << counter << " Tries.\n";
					return true;
				}
				word = "";
			}

		}
	
	}
	cout << "Password not found after " << counter << " Tries.\n";
	return false;
}

int main() {

	GuessPassword(ReadPassword());
	return 0;
}