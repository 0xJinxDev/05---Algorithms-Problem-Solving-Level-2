//Write a program to print digits in a reversed order
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


void ReversedNumber(int number) {
    int temp = 0;
    while (number > 0) {
		temp = (number % 10);
        number /= 10;
		cout << temp <<endl;
    }
	
}
int main() {
	
 ReversedNumber(ReadPositiveNumber("Please Enter a positive Number"));
	return 0;
}