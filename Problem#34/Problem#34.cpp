//Write a program to fill array with max size of 100 elements with n random numbers from 1 to 100 then ask the user
//to search for a number then print the position of the number in the array and its order


#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

int ReadPositiveNumber(string Message) {

	int number = 0;
	do {
		cout << Message << endl;
		cin >> number;

	} while (number <= 0);

	return number;
}

int RandomNumber(int From, int To) {

	return rand() % (To - From + 1) + From;

}


void FillArrayWithRandomNumbers(int arr[100], int Length) {

	for (int i = 0;i < Length;i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int Length) {

	for (int i = 0; i < Length;i++) {

		cout << arr[i] << " ";
	}
	cout << endl;
}

short CheckNumber(int arr[100], int arrLength, int number) {

	for (int i = 0;i < arrLength;i++) {

		if (arr[i] == number) {
		
			return i;
		}
	}

	return -1;
}
int main() {
	int arrLength = ReadPositiveNumber("Please enter array length");
	int arr[100];
	srand((unsigned)time(NULL));
	FillArrayWithRandomNumbers(arr, arrLength);
	PrintArray(arr, arrLength);

	short number = CheckNumber(arr, arrLength, ReadPositiveNumber("Please enter the number you want to search for:"));

	if (number != -1) {
		cout << "Number found at position " << number << " with order " << number + 1 << endl;
	}
	else {
		cout << "Number not found";
	}
	return 0;
}