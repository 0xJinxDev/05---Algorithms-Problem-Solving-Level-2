//Write a program to print from AAA to ZZZ

#include<iostream>
#include<string>


using namespace std;



void PrintLetters() {

	for (int i = 65; i <= 90; i++) {
		
		for (int j = 65; j <= 90;j++) {
			for (int k = 65; k <= 90;k++) {

				cout << (char)(i) << (char)(j) << (char)(z)<<endl;

			}

		}
		
	}

}

int main() {

	PrintLetters();
	return 0;
}