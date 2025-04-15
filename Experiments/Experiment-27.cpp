/*
An election is contested by 5 candidates. The candidates are numbered 1 to 5 and the
voting is done by marking the candidate number on the ballot paper. Write a C++
program to read the ballots and count the votes cast for each candidate using an array.
In case, a number read is outside the range 1 to 5, the ballot should be considered as a
„spoilt ballot‟ and the program should also count the number of spoilt ballots.
*/

#include <iostream>
using namespace std;

class Election {
private:
    int votes[5];  // Array to store votes for each candidate
    int spoiledBallots;  // Variable to store the number of spoiled ballots

public:
    // Constructor to initialize votes and spoiled ballots
    Election() {
        for(int i = 0; i < 5; i++) {
            votes[i] = 0;  // Initialize all candidates' votes to 0
        }
        spoiledBallots = 0;  // Initialize spoiled ballots to 0
    }

    // Method to read the ballots and count the votes
    void countVotes() {
        int ballot;
        cout << "Enter votes (enter 0 to stop):" << endl;
        
        // Keep reading ballots until the user enters 0
        while(true) {
            cin >> ballot;
            if (ballot == 0) {
                break;  // Exit the loop if ballot is 0
            }
            if (ballot >= 1 && ballot <= 5) {
                votes[ballot - 1]++;  // Increment the vote for the respective candidate
            } else {
                spoiledBallots++;  // Increment the spoiled ballot count if the input is invalid
            }
        }
    }

    // Method to display the results
    void displayResults() {
        cout << "\nElection Results:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Candidate " << (i + 1) << " received " << votes[i] << " votes." << endl;
        }
        cout << "Number of spoiled ballots: " << spoiledBallots << endl;
    }
};

int main() {
    Election election;  // Create an Election object

    election.countVotes();  // Count the votes from user input
    election.displayResults();  // Display the election results

    return 0;
}
