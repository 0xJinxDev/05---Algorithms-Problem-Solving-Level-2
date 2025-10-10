//Write a program to count odd numbers in an array

#include <iostream>
#include <string>

using namespace std;




int ReadNumber(string Message) {
	int number = 0;

	do {
		cout << Message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}


void AddArrayElement(int arr[100], int& Length, int number) {

	arr[Length] = number;
	Length++;
}

void FillArray(int arr[100], int& Length) {

	int flag = 1;

	while (flag != 0 && Length < 100) {

		AddArrayElement(arr, Length, ReadNumber("Please enter an element:"));

		cout << "Do you want to add another element ? [1] yes, [0] no\n";
		cin >> flag;
		while (flag != 0 && flag != 1) {
			cout << "Please enter only 1 or 0!";
			cin >> flag;
		}
	}

}

void PrintArray(int arr[100], int Length) {

	for (int i = 0; i < Length; i++) {

		cout << arr[i] << " ";
	}
	cout << endl;

}


bool isNegative(int number) {
	return number % 2 == 0;
}

int CountEven(int arr[100], int Length) {
	int counter = 0;
	for (int i = 0; i < Length; i++) {
		if (isNegative(arr[i]))
			counter++;
	}

	return counter; 
}
int main() {

	int arr[100], Length = 0;

	FillArray(arr, Length);
	PrintArray(arr, Length);

	cout << "Number of odd numbers is " << CountEven(arr, Length) << endl;
	return 0;
}