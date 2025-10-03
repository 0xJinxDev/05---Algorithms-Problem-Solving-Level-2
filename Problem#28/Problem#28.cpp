//Write a program to copy an array

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


void FillArrayWithRandomNumbers(int arr[100], int& Length) {

	Length = ReadPositiveNumber("Please enter the array length: ");

	for (int i = 0;i < Length;i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int Length) {

	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

}

void CopyArray(int arr1[100], int arr2[100], int Length) {

	for (int i = 0; i < Length; i++) {
		arr2[i] = arr1[i];
	}
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], Length;

	FillArrayWithRandomNumbers(arr1, Length);
	
	CopyArray(arr1, arr2, Length);

	cout << "Array 1 is: ";
	PrintArray(arr1, Length);
	cout << "Array 2 is: ";
	PrintArray(arr2, Length);

	return 0;
}