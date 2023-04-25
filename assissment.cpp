#include <iostream>
#include <stdlib.h>     // for srand() and rand()
#include <ctime>        // for time()

using namespace std;

class Game 
{
    private:
        int playerChoice;
        int computerChoice;

    public:
        // Function to display the menu
        void displayMenu() 
		{
            cout << "Welcome to Rock Paper Scissor Game!" << endl;
            cout << "Enter your choice:" << endl;
            cout << "1. Rock" << endl;
            cout << "2. Paper" << endl;
            cout << "3. Scissor" << endl;
        }

        // Function to get player's choice and computer's choice
        void getChoices() 
		{
            // Get the seed value for random number generator
            srand(time(0));

            // Generate a random number for computer's choice
            computerChoice = (rand() % 3) + 1;

            // Get player's choice
            cout << "Your choice: ";
            cin >> playerChoice;
        }

        // Function to play the game and display the result
        void playGame() 
		{
            cout << "Computer's choice: " << computerChoice << endl;

            if (playerChoice == computerChoice) 
			{
                cout << "It's a tie!" << endl;
            } 
			else if 
			((playerChoice == 1 && computerChoice == 3) ||
            (playerChoice == 2 && computerChoice == 1) ||
            (playerChoice == 3 && computerChoice == 2)) 
			{
                cout << "Congratulations! You won!" << endl;
            } 
			else 
			{
                cout << "Sorry! You lost!" << endl;
            }
        }
};

int main() 
{
    // Create an object of the Game class
    Game game;

    // Display the menu
    game.displayMenu();

    // Get player's choice and computer's choice
    game.getChoices();

    // Play the game and display the result
    game.playGame();

}

