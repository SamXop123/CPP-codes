#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (isupper(input[i])) {
            input[i] = tolower(input[i]); 
        }
        else if (islower(input[i])) {
            input[i] = toupper(input[i]); 
        }
    }
  
    cout << "Converted String: " << input << endl;
  
    return 0;
}

