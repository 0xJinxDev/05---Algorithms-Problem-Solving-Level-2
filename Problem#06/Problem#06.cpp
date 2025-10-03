//Write a program to print the sum of the digits
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

int SumOfDigits(int number) {
	int sum = 0;
	while (number > 0) {
		sum += number % 10;
		number = number / 10;
	}

	return sum;
}

int main() {
	
	cout << SumOfDigits(ReadPositiveNumber("Please enter a positive number:"));

	return 0;
}