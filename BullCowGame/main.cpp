#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
bool AskToPlayAgain();
string GetGuess();


// the entry point for our application
int main()
{		
	bool bPlayAgain = false;
	do	{
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} 
	while (bPlayAgain);

	return 0; // exit the application
}


// introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows.\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}


void PlayGame()
{
	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++)
	{
		string Guess = GetGuess();		
		cout << "Your guess was: " << Guess << endl;
		cout << endl;
	}
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again? (y/n)";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y' || Response[0] == 'Y');
}

// get a guess by the player
string GetGuess() 
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}