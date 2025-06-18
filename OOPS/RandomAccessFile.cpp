#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing integers to binary file
    int numbers[] = {10, 20, 30};
    ofstream outFile("numbers.dat", ios::binary);
    outFile.write((char*)numbers, sizeof(numbers));
    outFile.close();

    // Reading second integer (random access)
    ifstream inFile("numbers.dat", ios::binary);
    int num;
    inFile.seekg(4, ios::beg); // Move to second integer (4 bytes from start)
    inFile.read((char*)&num, sizeof(int));
    cout << "Second number: " << num << endl; // Outputs 20
    inFile.close();

    return 0;
}
