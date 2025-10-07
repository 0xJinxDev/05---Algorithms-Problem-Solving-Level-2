//Write a program to dynamically read numbers and save them in an array max size of array is 100 allocate simi-dynamic array length


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

void AddArrayElement(int arr[100], int& arrLength, int number) {

	arr[arrLength] = number;
	arrLength++;

}

void ReadArray(int arr[100], int& Length) {
	int flag = 1;
	Length = 0;

	while (flag == 1 && Length < 100) {

		AddArrayElement(arr, Length, ReadPositiveNumber("Please Enter a positive number:"));
		cout << "Do you want to add another element ? [1] yes, [0] no: ";
		do {
			cin >> flag;
			if (flag < 0 || flag>1) {
				cout << "Please enter only 1 or 0\n";
			}
		} while (flag < 0 || flag>1);
	}
}


void PrintArray(int arr[100], int Length) {

	for (int i = 0; i < Length;i++) {

		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {
	int arr[100], arrLength;

	ReadArray(arr, arrLength);
	PrintArray(arr, arrLength);


	return 0;
}