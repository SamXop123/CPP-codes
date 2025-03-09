#include <iostream>
using namespace std;

int main() {
    int arr[2][3];

    // Input
    cout << "Enter 6 numbers (2 rows × 3 columns):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Output 
    cout << "\nMatrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
