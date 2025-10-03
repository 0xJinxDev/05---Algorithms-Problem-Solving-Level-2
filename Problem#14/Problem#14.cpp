//Write a program to print an inverted pattern of letter

#include<iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string Message) {
	int number = 0;

	do {
		cout << Message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}

void PrintPattern(int number) {

	for (int i = number; i > 0; i--) {

		for (int j = i; j > 0; j--) {
			cout << (char)(i + 64);
		}
		cout << endl;
	}

}

int main() {

	PrintPattern(ReadPositiveNumber("Please enter a positive number:"));
	return 0;
}