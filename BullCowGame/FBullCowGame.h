#pragma once
#include <string>

class FBullCowGame {
public:
	void Reset(); // TODO make a more rich return value.
	int GetMaxTries();
	int GetCurrentTry();
	bool isGameWon();
	bool IsGuessValid(std::string);
	

private:
	int MyCurrentTry;
	int MyMaxTries;
};