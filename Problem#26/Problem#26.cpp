//Write a program to find the sum of elements in a random array

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

	Length = ReadPositiveNumber("Please enter number of elements to be filled:");

	for (int i = 0;i < Length;i++) {
		arr[i] = RandomNumber(1, 100);
	}

}

void PrintArray(int arr[100], int Length) {

	for (int i = 0;i < Length;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int SumOfArray(int arr[100], int Length) {

	int sum = 0;

	for (int i = 0;i < Length;i++) {

		sum += arr[i];
	}
	return sum;
}

int main() {

	srand((unsigned)time(NULL));
	int arr[100], Length;
	FillArrayWithRandomNumbers(arr, Length);
	PrintArray(arr, Length);

	cout << "The sum of the array elements is: " << SumOfArray(arr, Length) <<endl;
	return 0;
}