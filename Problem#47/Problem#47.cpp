//Write a program to round numbers


#include<iostream>
#include<string>

using namespace std;



float ReadNumber(string Message) {

	float number = 0;
	cout << Message << endl;
	cin >> number;
	return number;
}

//float MyRound(float number) {
//	float temp = 0;
//	if (number > 0) {
//		temp = number - (int)number;
//		if (temp < 0.5)
//		{
//			return (int)number;
//
//		}
//		else
//			return (int)number +1;
//	}
//	else {
//		temp = number - (int)number;
//		
//		if (temp > -0.5)
//		{
//			return (int)number;
//		
//		}
//		else
//			return (int)number -1 ;
//	}
//
//}

float GetFractionPart(float Number)
{
	return Number - int(Number);
}

int MyRound(float Number)
{
	int IntPart = int(Number);
	float FractionsPart = GetFractionPart(Number);

	if (abs(FractionsPart) >= 0.5)
	{
		if (Number > 0)
			return IntPart + 1;
		else
			return IntPart - 1;
	}
	else
	{
		return IntPart;
	}
}
int main() {

	float number = ReadNumber("Please enter a number:");

	cout << "My round is " << MyRound(number) << endl;
	cout << "c++ Round is " << round(number) << endl;

	return 0;
}