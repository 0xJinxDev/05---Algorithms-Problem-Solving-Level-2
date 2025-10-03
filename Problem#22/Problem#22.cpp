//Write a program to read N elements and store them in array then print all array elements and ask for a number to check,
// then print how many number a certain element repeated in that array

#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message) {

	int number = 0;
	do {
		cout << Message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}

void ReadArray(int arr[100], int& arrLength) {

	arrLength = ReadPositiveNumber("Please enter the array length:");

	for (int i = 0;i < arrLength;i++) {
		cout << "Please enter the element [ " << i + 1 << " ]:" << endl;
		cin >> arr[i];
	}
	cout << endl;
}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int TimesRepeated(int arr[100], int arrlength, int check) {

	int counter = 0;

	for (int i = 0;i < arrlength;i++) {
		if (arr[i] == check)
			counter++;
	}
	return counter;
}
int main() {
	int arr[100], arrlength;

	ReadArray(arr, arrlength);
	PrintArray(arr, arrlength);
	cout<< "The digit repeated " << TimesRepeated(arr, arrlength, ReadPositiveNumber("Please enter the number you want to check")) <<" times.";
	return 0;
}