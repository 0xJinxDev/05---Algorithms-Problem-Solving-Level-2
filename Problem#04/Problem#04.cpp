// Write a program to print perfect numbers from 1 to n
#include<iostream>
#include<string>

using namespace std;

int ReadPositiveNumber(string Message) {

	int number = 0;
	do {
		cout << Message;
		cin >> number;
	} while (number <= 0);
	return number;
}

bool isPerfect(int number) {

	int sum = 1;

	for (int i = 2; i <= number / 2;i++) {

		if (number % i == 0)
			sum += i;
	}
	return sum == number;
}


void PerfectNumbers(int number) {

	for (int i = 1; i <= number;i++) {
		if (isPerfect(i))
			cout << i << endl;
	}

}


int main() {

	PerfectNumbers(ReadPositiveNumber("Please enter a positive number"));

	return 0;
}