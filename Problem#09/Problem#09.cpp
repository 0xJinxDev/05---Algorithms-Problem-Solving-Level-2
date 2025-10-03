//Write a program to print each digit's frequecy in a given number

#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message) {

	int number = 0;
	do {
		cout << Message<<endl;
		cin >> number;
	} while (number <= 0);

	return number;

}

int CheckFrequency(int number, int digit) {
	int counter = 0;
	while (number > 0) {
		if (number % 10 == digit)
			counter++;

		number = number / 10;
	}
	return counter;
}

void UniqueDigits(int number) {
	for (int i = 0; i < 10;i++) {

		int DigitFrequency = CheckFrequency (number, i);

		if (DigitFrequency > 0) {

			cout << "The digit " << i << " is repeated " << DigitFrequency << " times.\n";
		}
	}
}
int main() {

	UniqueDigits(ReadPositiveNumber("Please enter a positive number"));


	return 0;
}