#include<iostream>
#include<string>
using namespace std;


int ReadPositiveNumber(string Message) {
	int number = 0;

	do { cout << Message; cin >> number; } while (number < 0);

		return number;
}

int main() {

	ReadPositiveNumber("Please Enter a positive Number:\n");

	return 0;
}