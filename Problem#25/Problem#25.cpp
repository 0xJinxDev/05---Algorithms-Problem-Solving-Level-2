//Write a program to get the min element of a random array


#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

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

	Length = ReadPositiveNumber("Please enter the array length:");

	for (int i = 0; i < Length;i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int Length) {

	for (int i = 0;i < Length;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int FindMaximumNumberInArray(int arr[100], int Length) {

	int min = 0;
	min = arr[0];

	for (int i = 0; i < Length;i++) {

		if (arr[i] < min)
			min = arr[i];
	}

	return min;
}
int main() {

	srand((unsigned)time(NULL));

	int arr[100], Length;

	FillArrayWithRandomNumbers(arr, Length);
	PrintArray(arr, Length);
	cout << "The minimum number in this array is [ " << FindMaximumNumberInArray(arr, Length) << " ] " << endl;

	return 0;
}