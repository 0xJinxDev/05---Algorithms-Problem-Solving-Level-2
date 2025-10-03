// Write a program to print random small letter, Capetial letter, Special Character, and Digit in order


#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>


using namespace std;

int RandomNumber(int From, int To) {

	return rand() % (To - From + 1) + From;

}


enum enCharType {

	SmallLetter = 1,
	CapitalLetter = 2,
	SpecialCharacter = 3,
	Digit = 4
};


char GetRandomCharacter(enCharType CharType) {
    if (CharType == enCharType::SmallLetter) {
        return char(RandomNumber(97, 122));
    }
    else if (CharType == enCharType::CapitalLetter) {
        return char(RandomNumber(65, 90));
    }
    else if (CharType == enCharType::SpecialCharacter) {
        return char(RandomNumber(33, 47));
    }
    else if (CharType == enCharType::Digit) {
        return char(RandomNumber(48, 57));
    }
    return '\0';
}

int main() {
	srand((unsigned)time(NULL));

    cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;


	return 0;
}