/* 
Guess-the-number-game: Write a program that pays the game of “guess the number”
as follows: Your program choose the number to be guess by selecting an integer at
random in the range 1 to 1000. The program then displays the following:
a. I have a number between 1 and 1000.
b. Can you guess my number? Please type your first guess.
The player then type a first guess. The program responds with one of the following:
a) Excellent! you guessed the number!
Would like to play again (y or n)?
a) Too low. Try again.
b) Too high. Try again.
If the payer‟s guess is incorrect, your program should loop until the player finally
get the number right. Your program should keep telling the player Too high or Too
low to help the player “zero in” on the correct answer.
*/

#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

void playGame() {
    int numberToGuess = rand() % 1000 + 1;  // Random number between 1 and 1000
    int guess;

    cout << "I have a number between 1 and 1000." << endl;
    cout << "Can you guess my number? Please type your first guess: ";

    while (true) {
        cin >> guess;

        if (guess < numberToGuess) {
            cout << "Too low. Try again: ";
        } else if (guess > numberToGuess) {
            cout << "Too high. Try again: ";
        } else {
            cout << "Excellent! You guessed the number! 🎉🎉" << endl;
            break;
        }
    }
}

int main() {
    srand(time(0));  // Seed random number generator
    char playAgain;

    do {
        playGame();
        cout << "Would you like to play again (y or n)? ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;
    return 0;
}
