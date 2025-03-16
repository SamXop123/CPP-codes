#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void matrixRain() {
    const int width = 80;
    while (true) {
        for (int i = 0; i < width; i++) {
            cout << (rand() % 2); // Random 0s and 1s
        }
        cout << endl;
        Sleep(50); // Adjust speed
    }
}

int main() {
    srand(time(0));
    matrixRain();
    return 0;
}