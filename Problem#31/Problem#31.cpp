//Write a program to fill array in ordered numbers from 1 to n then shuffle this array then print it back to the user

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

void FillArrayWithOrderedNumbers(int arr[100], int arrLength) {
	
	for (int i = 0;i < arrLength;i++) {
		arr[i] = i + 1;
	}
}

void Swap(int& num1, int& num2) {

	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0;i < arrLength;i++) {

		cout << arr[i] << " ";
	}
	cout << endl;
}

void ShuffleArray(int arr[100], int arrLength) {



	for (int i = 0;i < arrLength;i++) {
		
		int index1 = RandomNumber(1, arrLength) - 1;
		int index2 = RandomNumber(1, arrLength) - 1;

		Swap(arr[index1],arr[index2]);
	}

}
int main() {

	srand((unsigned)time(NULL));

	int arr[100], arrLength = ReadPositiveNumber("Please enter the number of elements:");

	FillArrayWithOrderedNumbers(arr, arrLength);
	cout << "Array before shuffle:\n";
	PrintArray(arr, arrLength);
	cout << "Array after shuffle:\n";
	ShuffleArray(arr, arrLength);
	PrintArray(arr, arrLength);

	return 0;
}