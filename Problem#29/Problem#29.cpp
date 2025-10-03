//Write a program to copy prime numbers from array 

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

bool isPrime(int number) {
	if (number <= 1)
		return false;

	for (int i = 2; i <= number / 2; i++) {
		if (number % i == 0)
			return false;
	}
	return true;
}

void CopyArrayPrimes(int arr1[100], int arr2[100], int Length,int & arr2Length) {
	int counter = 0;


	
	for (int i = 0; i < Length; i++) {
		if (isPrime(arr1[i])) {
			arr2[counter] = arr1[i];
			counter++;
		}
		
	}

	arr2Length = counter;
}
int main() {

	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], Length, arr2Length;
	  
	FillArrayWithRandomNumbers(arr1, Length);

	CopyArrayPrimes(arr1, arr2, Length,arr2Length);

	cout << "Array 1 is: ";
	PrintArray(arr1, Length);
	cout << "Array 2 is: ";
	PrintArray(arr2, arr2Length);

	return 0;
}