//Write a program to fill array with numbers, then print distinct numbers to another array


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


void AddArrayElement(int arr[100], int& Length, int Number) {

	arr[Length] = Number;
	Length++;
}

void FillArray(int arr[100], int& Length) {
	int flag = 1;

	while (flag == 1 && Length < 100) {
		AddArrayElement(arr, Length, ReadPositiveNumber("Please add element:"));

		cout << "Do you want to add another element? [1] yes, [0] no: ";
		cin >> flag;

		
		while (flag != 0 && flag != 1) {
			cout << "Please enter only 1 or 0: ";
			cin >> flag;
		}
	}
}


void PrintArray(int arr[100], int Length) {
	for (int i = 0; i < Length;i++) {

		cout << arr[i] << " ";
	}
	cout << endl;
}

bool isInArray(int arr[100], int Length, int number) {
	for (int i = 0;i < Length;i++) {

		if (arr[i] == number)
			return true;
	}

	return false;
}

void CopyDistinctNumbers(int source[100], int Destination[100], int SourceLength, int& DestinationLength) {


	for (int i = 0; i < SourceLength; i++) {

		if (!isInArray(Destination, DestinationLength, source[i])) {
			AddArrayElement(Destination, DestinationLength, source[i]); 
		}
	}
}
int main() {

	int source[100], Destination[100], SourceLength = 0, DestinationLength = 0;
	FillArray(source, SourceLength);

	PrintArray(source, SourceLength);
	CopyDistinctNumbers(source, Destination, SourceLength, DestinationLength);
	PrintArray(Destination, DestinationLength);
	return 0;
}