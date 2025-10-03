//Write a porgram to check if a number is a perfect number or not 
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

bool isPerfect(int number) {
	int sum = 1;
	for (int i = 2; i <= number/2;i++) {
		if (number % i == 0)
			sum += i;

	}
	return number == sum;
}

int main() {

	if (isPerfect(ReadPositiveNumber("Please Enter a Positive Number"))) {
		cout << "Number is perfect";
	}
	else {
		cout << "Number is not perfect";
	}


	return 0;
}