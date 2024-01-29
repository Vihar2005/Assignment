#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to get user's choice
int getUserChoice() 
{
    int choice;
    cout << "Choose (1) Rock, (2) Paper, or (3) Scissors: ";
    cin >> choice;
    return choice;
}

// Function to get computer's choice
int getComputerChoice() 
{
    // Seed the random number generator with current time
    srand(time(0));
    return (rand() % 3) + 1;
}

// Function to determine winner
int determineWinner(int userChoice, int computerChoice) 
{
    if (userChoice == computerChoice) 
	{
        return 0; // Tie
    } 
	else if 
			((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) 
	{
        return 1; // User wins
    } 
	else 
	{
        return 2; // Computer wins
    }
}

// Function to display results
void displayResults(int result) 
{
    if (result == 0) 
	{
        cout << "It's a tie!" << endl;
    } 
	else if (result == 1) 
	{
        cout << "You win!" << endl;
    } 
	else 
	{
        cout << "Computer wins!" << endl;
    }
}

int main() 
{
    int userChoice, computerChoice, result;
    cout << "Welcome to Rock Paper Scissors game!" << endl;

    // Loop until user wants to quit
    do 
	{
        userChoice = getUserChoice();
        computerChoice = getComputerChoice();
        result = determineWinner(userChoice, computerChoice);
        displayResults(result);
        cout << endl << "Play again? (Y/N): ";
        char playAgain;
        cin >> playAgain;
        if (playAgain != 'Y' && playAgain != 'y') 
		{
            break;
        }
    } while (true);

    cout << "Thanks for playing!" << endl;
    return 0;
}

