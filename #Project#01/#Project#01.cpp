//Write a rock paper scissor game


#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;
//1- Rock
//2- Paper
//3- Scissor

short RandomNumber(short From, short To) {
	return rand() % (To - From + 1) + From;
}

bool isDraw(short Player, short Computer) {

	return Player == Computer;
}

bool PlayerWin(short Player, short Computer) {

	return (Player == 1 && Computer == 3) || (Player == 2 && Computer == 1) || (Player == 3 && Computer == 2);
}

string Choice(short choice) {

	switch (choice) {
	case 1: return "Rock";
	case 2: return "Paper";
	case 3: return "Scissor";

	}
}

void PrintRoundResults(short round, short Player, short Computer, string Result) {
	cout << endl;
	cout << "_______Round[" << round << "]_______\n";
	cout << "Player choice: " << Choice(Player) << endl;
	cout << "Computer choice: " << Choice(Computer) << endl;
	cout << "Round winner: " << Result << endl;
}

string Winner(short PlayerWins, short ComputerWins) {

	if (PlayerWins > ComputerWins) {
		return "Player";
	}
	else if (ComputerWins > PlayerWins) {
		return "Computer";
	}
	else return "No winner";
}
void Rounds(short Rounds) {
	short PlayerChoice = 0;
	short ComputerChoice = 0;
	short PlayerWins = 0;
	short ComputerWins = 0;
	short Draw = 0;
	for (short i = 1; i <= Rounds; i++) {
		cout << endl;
		cout << "Round [" << i << "] begins:\n\n";
		cout << "Your Choice [1] Rock, [2] Paper, [3] Scissor ?";
		cin >> PlayerChoice;
		ComputerChoice = RandomNumber(1, 3);
		if (isDraw(PlayerChoice, ComputerChoice)) {
			Draw++;
			PrintRoundResults(i, PlayerChoice, ComputerChoice, "No winner");
			system("color E0");
		}
		else if (PlayerWin(PlayerChoice, ComputerChoice)) {
			PlayerWins++;
			PrintRoundResults(i, PlayerChoice, ComputerChoice, "Player");
			system("color A0");
		}
		else {
			ComputerWins++;
			PrintRoundResults(i, PlayerChoice, ComputerChoice, "Computer");
			system("color C0");
		}
		Sleep(1000);
	}
	Sleep(1000);
	string finalWinner = Winner(PlayerWins, ComputerWins);
	if (finalWinner == "Player")
		system("color A0");
	else if (finalWinner == "Computer")
		system("color C0");
	else
		system("color E0");
	cout << "Final Results\n\n";
	cout << "Player wins: " << PlayerWins << endl;
	cout << "Computer wins: " << ComputerWins << endl;
	cout << "Draw times: " << Draw << endl;
	cout << "Final winner: " << finalWinner << endl;

}
void StartGame() {

	char Flag = 'Y';
	short NumberOfRounds = 0;
	while (Flag == 'Y' || Flag == 'y') {
		system("cls");
		system("color 07");
		cout << "How many rounds? 1 to 10\n";
		cin >> NumberOfRounds;
		while (NumberOfRounds < 1 || NumberOfRounds > 10) {
			cout << "Please only from 1 to 10:\n";
			cin >> NumberOfRounds;
		}

		Rounds(NumberOfRounds);

		cout << "Do you want to play again ? Y/N\n";
		cin >> Flag;

	}
	system("color 07");
	system("cls");
	cout << "Thank you for playing!\n";
}
int main() {
	srand((unsigned)time(NULL));

	StartGame();

	return 0;
}