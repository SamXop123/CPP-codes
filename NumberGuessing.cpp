#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
  
    srand(time(0)); 
    int randomNumber = rand() % 100 + 1; 
    int userGuess;
    int attempts = 0;

    cout << "===== Welcome to the Number Guessing Game! =====" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again. 🔽" << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again. 🔼" << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << endl;
            break;
        }
    }

    return 0;
}
