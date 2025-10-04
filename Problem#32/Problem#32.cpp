//Write a program to fill array with max size 100 with random numbers from 1 to 100 copy it in another array in reverse order


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


void FillArrayWithRandomNumbers(int arr[100], int Length) {

	for (int i = 0; i < Length;i++) {
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int Length) {

	for (int i = 0; i < Length;i++) {
		cout << arr[i] << " ";
	}
}

void CopyArrayinReverse(int arr1[100], int arr2[100], int Length) {

	//for (int i = Length - 1; i >= 0;i--) {
	//	
	//	arr2[Length - 1 -i] = arr1[i];
	//
	//}

	for (int i = 0; i < Length;i++) {

		arr2[i] = arr1[Length - 1 - i];
	}


}


int main() {


	srand((unsigned)time(NULL));
	int arr[100], copy[100], Length = ReadPositiveNumber("Please enter the array length:");

	FillArrayWithRandomNumbers(arr, Length);
	PrintArray(arr, Length);

	CopyArrayinReverse(arr, copy, Length);
	cout << endl;
	PrintArray(copy, Length);

	return 0;
}