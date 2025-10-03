// Write a program to print the multiplication table from 1 to 10

#include <iostream>
using namespace std;

void PrintTableHeader() {

	cout << "\n\n\t\t\t Multiplication Table from 1 to 10\n\n";
	cout << "\t";
	for (int i = 1;i <= 10;i++) {
		cout << i << "\t";

	}

	cout << "\n____________________________________________________________________________________\n";
}
string ColumSperator(int i) {
	if (i < 10)
		return "   |";
	else
		return "  |";
}

void PrintmultiplcationTable() {

	PrintTableHeader();

		for (int i = 1; i <= 10;i++) {
			cout << " " << i << ColumSperator(i) << "\t";
			for (int j = 1; j <= 10;j++)
			{
				cout << i * j << "\t";
			}
			cout << endl;
		}
}
int main() {


	PrintmultiplcationTable();

	return 0;
}