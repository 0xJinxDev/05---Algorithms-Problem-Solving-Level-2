//Write a program to check if a given number is palindrome or not

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



bool isPalindrome(int number) {
	int original = number;
	int reversed = 0;
	while (number > 0) {

		reversed = reversed * 10 + (number % 10);

		number = number / 10;
	}
	return reversed == original;
}

void PrintResults(int number) {

	if (isPalindrome(number))
		cout << "Number is palindrome";
	else
		cout << "Number is not palindrome";
}
int main() {

	PrintResults(ReadPositiveNumber("Please enter a postivie number"));

	return 0;
}