//Write a program to fill an array with max size 100 with random numbers from 1 to 10

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

int ReadPositiveNumber(string Message) {
	int number = 0;
	do {
		cout << Message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}


void FillArrayWithRandomNumbers(int arr[100], int& length) {

	length = ReadPositiveNumber("Please enter the length of the array");

	for (int i = 0;i < length;i++) {

		arr[i] = RandomNumber(1, 100);
	}

}

void PrintArray(int arr[100], int length) {
	cout << "The array is: ";
	for (int i = 0;i < length;i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	srand((unsigned)time(NULL));
	int arr[100], arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);
	PrintArray(arr, arrLength);
	return 0;
}