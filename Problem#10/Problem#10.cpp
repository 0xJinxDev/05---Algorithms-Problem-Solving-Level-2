//Write a program to print digits in order

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


int ReverseNumber(int number) {

	int reversed = 0;

	while (number > 0) {

		reversed = reversed * 10 + (number % 10);
		number = number / 10;

	}
	return reversed;
}

void PrintDigits(int number) {


	while (number > 0) {

		cout << number % 10 << endl;
		number = number / 10;
	
	}

}

int main() {

	PrintDigits(ReverseNumber(ReadPositiveNumber("Please enter a positive number:")));

	return 0;
}