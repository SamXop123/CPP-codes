#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int getComputerChoice() {
    srand(time(0));
    return rand() % 3 + 1;  
}

void displayChoice(int choice) {
    switch (choice) {
        case 1: cout << "Rock"; break;
        case 2: cout << "Paper"; break;
        case 3: cout << "Scissors"; break;
        default: cout << "Invalid choice"; break;
    }
}

void determineWinner(int userChoice, int computerChoice) {
    cout << "Computer chose: ";
    displayChoice(computerChoice);
    cout << endl;

    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else {
        switch (userChoice) {
            case 1:
                if (computerChoice == 2) cout << "You lose! Paper beats Rock.\n";
                else cout << "You win! Rock beats Scissors.\n";
                break;
            case 2:
                if (computerChoice == 3) cout << "You lose! Scissors beat Paper.\n";
                else cout << "You win! Paper beats Rock.\n";
                break;
            case 3:
                if (computerChoice == 1) cout << "You lose! Rock beats Scissors.\n";
                else cout << "You win! Scissors beat Paper.\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}

int main() {
    int userChoice, computerChoice;
    char playAgain;
  
    do {
        cout << "\nRock, Paper, Scissors Game\n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "Enter your choice (1-3): ";
        cin >> userChoice;

        if (userChoice < 1 || userChoice > 3) {
            cout << "Invalid choice! Please enter 1, 2, or 3.\n";
            continue;
        }

        computerChoice = getComputerChoice();

        cout << "You chose: ";
        displayChoice(userChoice);
        cout << endl;

        determineWinner(userChoice, computerChoice);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Goodbye.\n";

    return 0;
}
