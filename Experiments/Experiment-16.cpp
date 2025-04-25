// Write a program to implement one dimension, two dimension, and three dimension array using class.

#include <iostream>
using namespace std;

// 1D Array Class
class OneD {
    int arr[5];
public:
    void input() {
        cout << "Enter 5 elements for 1D array: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "1D Array: ";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// 2D Array Class
class TwoD {
    int arr[3][3];
public:
    void input() {
        cout << "Enter 9 elements for 3x3 2D array:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][j];
            }
        }
    }

    void display() {
        cout << "2D Array:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

// 3D Array Class
class ThreeD {
    int arr[2][2][2];
public:
    void input() {
        cout << "Enter 8 elements for 2x2x2 3D array:\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    cin >> arr[i][j][k];
                }
            }
        }
    }

    void display() {
        cout << "3D Array:\n";
        for (int i = 0; i < 2; i++) {
            cout << "Layer " << i + 1 << ":\n";
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    cout << arr[i][j][k] << " ";
                }
                cout << endl;
            }
        }
    }
};

int main() {
    OneD obj1D;
    TwoD obj2D;
    ThreeD obj3D;

    // 1D Array
    obj1D.input();
    obj1D.display();

    // 2D Array
    obj2D.input();
    obj2D.display();

    // 3D Array
    obj3D.input();
    obj3D.display();

    return 0;
}
