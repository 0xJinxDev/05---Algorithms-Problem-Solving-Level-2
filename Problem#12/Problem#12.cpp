//Write a program to print inverted pattern

#include <iostream>
#include <string>

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

	for (int i = number ; i > 0; i--) {

		for (int j = i; j > 0;j--) {
			cout << i;
		}
		cout << endl;
	}

}

int main() {

	PrintPattern(ReadPositiveNumber("Please enter a positive number:"));

	return 0;
}