//Write a MySqrt function

#include<iostream>
#include<string>


using namespace std;


float ReadNumber(string Message) {
	float number = 0;
	cout << Message;
	cin >> number;
	return number;
}




float MySqrt(float Number)
{
	return pow(Number, 0.5); 
}

int main() {

	float number = ReadNumber("Please enter your number:");

	cout << "MyCeil :" << MySqrt(number) << endl;
	cout << "C++ Ceil:" << sqrt(number) << endl;
	return 0;
}