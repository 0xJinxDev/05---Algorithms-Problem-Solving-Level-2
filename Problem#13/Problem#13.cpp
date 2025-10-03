// Write a program to print a pattern

#include <iostream>
#include <string>

using namespace std;

int ReadPostiveNumber(string Message) {
	int number = 0;
	do {
		cout << Message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}


void PrintPattern(int number) {

	for (int i = 1; i <= number;i++) {
		
		for (int j = 1; j <= i; j++) {

			cout << i;
		}
		cout << endl;
	}

}
int main() {

	PrintPattern(ReadPostiveNumber("Please enter a positive number:"));
	return 0;
}