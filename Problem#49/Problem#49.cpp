//Write a MyCeil function

#include<iostream>
#include<string>


using namespace std;


float ReadNumber(string Message) {
	float number = 0;
	cout << Message;
	cin >> number;
	return number;
}




float MyCeil(float number) {



	return (number == (int)number || number <= 0) ? (int)number : (int)number + 1;

}

int main() {

	float number = ReadNumber("Please enter your number:");

	cout << "MyCeil :" << MyCeil(number) << endl;
	cout << "C++ Ceil:" << ceil(number) << endl;
	return 0;
}