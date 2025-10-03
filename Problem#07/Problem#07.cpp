//Write a program to print number reversed
#include<iostream>
#include<string>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int number = 0;
	do {
		cout << Message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}


int ReversedNumber(int number) {
	int reversed = 0;
	while (number > 0) {
		reversed = reversed * 10 + (number % 10);
		number /= 10;
	}
	return reversed;
}
int main() {

	cout << ReversedNumber(ReadPositiveNumber("Please Enter a positive Number"));
	return 0;
}