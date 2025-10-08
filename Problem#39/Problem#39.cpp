//Write a program to fill an array with max size of 100 with random numbers from 1 to 100,copy only the prime numbers into another array using
//AddArrayElement function



#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>


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


void AddArrayElement(int arr[100], int& Length, int number) {

	arr[Length] = number;
	Length++;
}


void FillArrayWithRandomNumbers(int arr[100], int Length) {

	for (int i = 0; i < Length; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

bool isPrime(int number) {
	if (number < 2) return false;
	for (int i = 2;i*i <= number;i++) {
		if (number %i == 0)
			return false;
	}
	return true;
}
void CopyOddNumbers(int Source[100], int Destination[100], int SourceLength, int& DestinationLength) {

	for (int i = 0; i < SourceLength; i++) {
		if (isPrime(Source[i])) {
			AddArrayElement(Destination, DestinationLength, Source[i]);
		}
	}
}

void PrintArray(int arr[100], int Length) {

	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
}
int main() {

	srand((unsigned)time(NULL));
	int arr[100], arrLength = ReadPositiveNumber("Please enter a positive Number:");
	int arr2[100], arr2Length = 0;

	FillArrayWithRandomNumbers(arr, arrLength);

	PrintArray(arr, arrLength);

	CopyOddNumbers(arr, arr2, arrLength, arr2Length);

	PrintArray(arr2, arr2Length);


	return 0;
}