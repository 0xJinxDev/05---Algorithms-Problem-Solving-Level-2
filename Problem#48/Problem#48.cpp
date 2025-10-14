//Write a MyFloor function

#include<iostream>
#include<string>


using namespace std;


float ReadNumber(string Message) {
	float number = 0;
	cout << Message;
	cin >> number;
	return number;
}




float MyFloor(float number) {
	
	return (number >= 0 || number == (int)number) ? (int)number : (int)number - 1;

}

int main() {

	float number = ReadNumber("Please enter your number:");

	cout << "MyFloor :" << MyFloor(number)<<endl;
	cout << "C++ Floor:" << floor(number)<<endl;
	return 0;
}