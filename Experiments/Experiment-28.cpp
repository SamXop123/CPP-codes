/* 
Develop a program which will read a string and rewrite it in the alphabetical order.
For example, the word STRING should be written as GINRST.
*/


#include <iostream>
#include <algorithm>
using namespace std;

class StringSorter {
private:
    string inputString;

public:
    // Method to read the input string
    void readString() {
        cout << "Enter a string: ";
        getline(cin, inputString);  // Read the input string including spaces
    }

    // Method to sort the string in alphabetical order
    void sortString() {
        sort(inputString.begin(), inputString.end());  // Sort the string using the built-in sort function
    }

    // Method to display the sorted string
    void displaySortedString() {
        cout << "Sorted string: " << inputString << endl;
    }
};

int main() {
    StringSorter sorter;  // Create an object of StringSorter

    sorter.readString();  // Read the string from the user
    sorter.sortString();  // Sort the string alphabetically
    sorter.displaySortedString();  // Display the sorted string

    return 0;
}
