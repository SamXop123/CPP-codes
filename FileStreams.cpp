#include <fstream>
#include <iostream>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, File!" << endl;
        outFile.close();
    }

    // Reading from a file
    ifstream inFile("example.txt");
    if (inFile.is_open()) {
        string line;
        getline(inFile, line);
        cout << "Read from file: " << line << endl;
        inFile.close();
    }
    return 0;
}
