#include <iostream>
using namespace std;

int CountRepeated(int number, int digit) {
    int counter = 0;
    while (number > 0) {
        if (number % 10 == digit)
            counter++;
        number /= 10;
    }
    return counter;
}

int ReadPositiveNumber(string Message) {
    int number;
    do {
        cout << Message;
        cin >> number;
    } while (number <= 0);
    return number;
}

int ReadDigit(string Message) {
    int digit;
    do {
        cout << Message;
        cin >> digit;
    } while (digit < 0 || digit > 9);
    return digit;
}

int main() {
    cout << CountRepeated(ReadPositiveNumber("Enter a positive number: "),
        ReadDigit("Enter a digit (0-9) to count: ")) << endl;
}