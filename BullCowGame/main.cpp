#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
void PrintGuess(string guess);
string GetGuess();
bool AskToPlayAgain();

// Entry point for our application
int main() {
	PrintIntro();
	PlayGame();
	AskToPlayAgain();
	return 0;
}

void PlayGame() {
	// loop until out of guesses
	constexpr int NUM_OF_GUESSES = 5;
	for (int i = 1; i <= NUM_OF_GUESSES; i++) {
		GetGuess();
		cout << endl;
	}
}

// introduce the game
void PrintIntro() {
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

// get a guess from the player
string GetGuess() {
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	PrintGuess(Guess);

	return Guess;
}

void PrintGuess(string guess) {
	// print the guess back to them
	cout << "Your guess was: " << guess << endl;
}

bool AskToPlayAgain() {
	cout << "Would you like to play again (y/n)?" << endl;

	string Response = "";
	getline(cin, Response);

	if (Response[0] == 'y' || Response[0] == 'Y') {
		cout << "True!" << endl;
		main();
		return true;
	} else {
		cout << "False!" << endl;
		return false;
	}

}