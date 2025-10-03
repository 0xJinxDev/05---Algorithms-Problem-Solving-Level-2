//Write a program to print all prime numbers until a given number n
#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Message) {

	int number = 0;
	do {
		cout << Message << "\n";
		cin >> number;

	} while (number <= 0);

	return number;
}

bool isPrime(int number) {
	if (number < 2)
		return 0;
	for (int i = 2; i <= number / 2;i++) {
		if (number % i == 0)
			return 0;
	}
	return 1;
}
void PrintPrimeNumbers(int number) {

	for (int i = 2; i <= number;i++) {
		if (isPrime(i)) {
			cout << i << "\t";
		}
	}
}
int main() {

	
	PrintPrimeNumbers(ReadPositiveNumber("Please Enter a Positive Number:"));

	return 0;
}