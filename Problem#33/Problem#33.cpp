//Write a program to fill array with keys


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

char GenerateRandomChar() {

	return char(RandomNumber(65, 90));
}

string GenerateRandomLetters(int number) {

	string Letters = "";
	for (int i = 1; i <= number; i++) {
		Letters = Letters + GenerateRandomChar();
	}

	return Letters;
}

string GenerateKey(int NumberofLetters, int NumberofParts) {

	string Key = "";
	for (int i = 1; i <= NumberofParts;i++) {
		if (i != NumberofParts) {

			Key = Key + GenerateRandomLetters(NumberofLetters) + "-";
		}
		else
		{
			Key = Key + GenerateRandomLetters(NumberofLetters);
		}

	}
	return Key;
}

void GenerateKeys(int number,string arr[100]) {
	int NumberOfLetters = ReadPositiveNumber("Please enter how many letter per part");
	int NumberOfParts = ReadPositiveNumber("Please enter how many parts");
	for (int i = 0; i < number; i++) {
		arr[i] = GenerateKey(NumberOfLetters, NumberOfParts);
	
	}
}

void PrintArray(string arr[100], int Length) {

	for (int i = 0; i < Length;i++) {

		cout << "Key [" << i+1 << "] = " << arr[i] << endl;
	}
	cout << endl;
}
int main() {

	srand((unsigned)time(NULL));
	string arr[100];
	int NumberOfKeys = ReadPositiveNumber("Please enter how many keys you want to generate:");

	GenerateKeys(NumberOfKeys,arr);
	PrintArray(arr, NumberOfKeys);
	return 0;
}