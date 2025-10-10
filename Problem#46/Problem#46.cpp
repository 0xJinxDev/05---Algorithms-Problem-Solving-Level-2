//Write a program to retrun abs of number



#include<iostream>
#include<string>

using namespace std;



float ReadNumber(string Message) {

	float number = 0;
	cout << Message << endl;
	cin >> number;
	return number;
}

float MyABS(float number) {

	return number < 0 ? number * -1 : number;
}
int main() {

	float number = ReadNumber("Please enter a number:");

	cout << "MyABS is " << MyABS(number)<<endl;
	cout << "c++ ABS is " << abs(number)<<endl;

	return 0;
}