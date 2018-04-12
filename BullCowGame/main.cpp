#include <iostream>
#include <string>


void PrintIntro();
void PlayGame();
void PrintGuess(std::string guess);
std::string GetGuess();
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
		std::cout << std::endl;
	}
}

// introduce the game
void PrintIntro() {
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

// get a guess from the player
std::string GetGuess() {
	std::cout << "Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);

	PrintGuess(Guess);

	return Guess;
}

void PrintGuess(std::string guess) {
	// print the guess back to them
	std::cout << "Your guess was: " << guess << std::endl;
}

bool AskToPlayAgain() {
	std::cout << "Would you like to play again (y/n)?" << std::endl;

	std::string Response = "";
	std::getline(std::cin, Response);

	if (Response[0] == 'y' || Response[0] == 'Y') {
		std::cout << "True!" << std::endl;
		main();
		return true;
	} else {
		std::cout << "False!" << std::endl;
		return false;
	}

}