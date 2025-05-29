#include <fstream>
#include <iostream>
using namespace std;

int main() {
    // Writing sequentially
    ofstream outFile("books.txt");
    if (outFile.is_open()) {
        outFile << "Line 1\nLine 2\nLine 3\n";
        outFile.close();
    }

    // Reading sequentially
    ifstream inFile("books.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
    return 0;
}
