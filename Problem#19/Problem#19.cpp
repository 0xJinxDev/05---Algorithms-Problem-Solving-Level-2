//Write a program to print 3 random numbers from 1 to 10

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;


int RandomNumber(int From, int To) {



	return rand() % (To - From + 1) + From;


}


int main() {

	srand((unsigned)time(NULL));


	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;

	return 0;
}



