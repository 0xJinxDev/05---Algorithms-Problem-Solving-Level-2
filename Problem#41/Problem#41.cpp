//Write a program to check if an array is palindrome or not

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



void PrintArray(int arr[100], int Length) {

	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void AddAarrayElement(int arr[100], int& Length, int number) {
	arr[Length] = number;
	Length++;
}


void FillArray(int arr[100], int &Length) {
	int flag = 1;

	while (flag != 0 && Length < 100) {

		AddAarrayElement(arr, Length, ReadPositiveNumber("Please enter element:"));

		cout << "Do you want to add another element? [1] yes, [0] no\n";

		cin >> flag;

		while (flag != 1 && flag != 0) {
			cout << "Please enter 1 or 0 only:\n";
			cin >> flag;
		}
	}
}

bool isPalindrom(int arr[100], int Length) {

	for (int i = 0; i < Length / 2; i++) {

		if (arr[i] != arr[Length - i - 1])
			return false;
	}

	return true;
}

int main() {
	int arr[100], Length = 0;

	FillArray(arr, Length);
	PrintArray(arr, Length);

	if (isPalindrom(arr,Length))
		cout << "Array is palindrom" << endl;
	else
		cout << "Array is NOT palindrom" << endl;


	return 0;
}