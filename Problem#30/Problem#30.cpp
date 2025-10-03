//Write a program to fill two random arrays then add the sum of them to a third array.
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

	return  number;
}

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}



void FillArrayWithRandomNumbers(int arr[100], int arrLength) {
	
	for (int i = 0; i < arrLength;i++) {

		arr[i] = RandomNumber(1, 100);

	}

}

void PrintArray(int arr[100], int arrLength) {

	for (int i = 0; i < arrLength;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void SumArrays(int arr1[100], int arr2[100], int sum[100],int arrLength) {

	for (int i = 0;i < arrLength;i++)
	{
		sum[i] = arr1[i] + arr2[i];
	}
}
int main() {

	srand((unsigned)time(NULL));
	int arr1[100], arr2[100], sum[100], arrLength = ReadPositiveNumber("Please enter the length of the array:");

	FillArrayWithRandomNumbers(arr1, arrLength);
	cout << "Array 1 is:\n";
	PrintArray(arr1, arrLength);
	FillArrayWithRandomNumbers(arr2, arrLength);
	cout << "Array 2 is:\n";
	PrintArray(arr2, arrLength);

	SumArrays(arr1, arr2, sum, arrLength);
	cout << "Sum array is:\n";
	PrintArray(sum, arrLength);


	return 0;
}