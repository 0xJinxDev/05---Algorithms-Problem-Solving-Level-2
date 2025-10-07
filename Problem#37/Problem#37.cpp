//Write a program to fill an array with max size of 100 with random numbers from 1 to 100,copy it into another array using
//AddArrayElement function

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

void AddArrayElement(int arr[100], int &Length, int number) {
	arr[Length] = number;
	Length++;
}

void FillArrayWithRandomNumbers(int arr[100], int &Length) {
	Length = ReadPositiveNumber("Please enter how many elements you want");
	for (int i = 0; i < Length;i++) {

		arr[i] = RandomNumber(1,100);
	}

}

void CopyArray(int Source[100], int Destination[100], int SourceLength, int & DestinationLength) {
	for (int i = 0; i < SourceLength; i++) {
		AddArrayElement(Destination, DestinationLength, Source[i]);
	}
}

void PrintArray(int arr[100], int Length) {

	for (int i = 0;i < Length;i++) {

		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {

	srand((unsigned)time(NULL));
	int arr[100], arr1Length=0, arr2[100], arr2Length=0;

	FillArrayWithRandomNumbers(arr, arr1Length);

	CopyArray(arr, arr2, arr1Length, arr2Length);
	PrintArray(arr, arr1Length);
	PrintArray(arr2, arr2Length);
	return 0;
}