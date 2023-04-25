#include <iostream>
#include <stdlib.h>     // for srand() and rand()
#include <ctime>        // for time()
using namespace std;
class Game 
{
    private:
        string playerName;
      /*  int numRounds;*/
        int playerChoice;
        int computerChoice;

    public:
        // Function to accept the player's name and number of rounds to play
        void acceptDetails() 
		{
            cout << "Enter your name: ";
            cin >> playerName;
            cout << "Enter the number of rounds to play: ";
           /* cin >> numRounds;*/
        }

        // Function to display the menu
        void displayMenu() 
		{
            cout << "Select your choice:" << endl;
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
          /*  cout << "Round " << numRounds << endl;*/
            cout << "Your choice: ";
            cin >> playerChoice;
        }

        // Function to play the game and display the result
        void playGame() {
            cout << "Computer's choice: " << computerChoice << endl;

            if (playerChoice == computerChoice) 
			{
                cout << "It's a tie!" << endl;
            } else if ((playerChoice == 1 && computerChoice == 3) ||
                       (playerChoice == 2 && computerChoice == 1) ||
                       (playerChoice == 3 && computerChoice == 2)) 
			{
                cout << "Congratulations " << playerName << "! You won this round!" << endl;
            } 
			else 
			{
                cout << "Sorry " << playerName << "! You lost this round!" << endl;
            }
        }
};

int main() 
{
    // Create an object of the Game class
    Game game;

    // Accept the player's name and number of rounds to play
    game.acceptDetails();

    // Play the game for the specified number of rounds
  /*  for (int i = 1; i <= game.numRounds; i++) */
	{
        // Display the menu
        game.displayMenu();

        // Get player's choice and computer's choice
        game.getChoices();

        // Play the game and display the result
        game.playGame();

        cout << endl;
    }

    return 0;
}

