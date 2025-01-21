#include <iostream>
using namespace std;

// BUBBLE SORT
//  if arr[i] > arr[i+1] swap them. To place the element in their respective position, we have to do the following operation N-1 times.
// Time complexity is --- O(n^2) --- (Big O of n square)

void printArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
        }
        cout << "\n";
}

int main() {
        const int MAX_SIZE = 100;
        int size;
        int arr[MAX_SIZE];

        cout << "Enter the size of the array:";
        cin >> size;

        if (size > MAX_SIZE) {
                cout << "Size exceeds maximum allowed size of " << MAX_SIZE << endl;
                return 1;
        }

        cout << "Enter the elements of the array:";
        for (int i = 0; i < size; i++) {
                cin >> arr[i];
        }

        cout << "Array before sorting:";
        printArray(arr, size);

        // Sorting Mechanism
        for(int i = 0; i < size-1; i++) {
                for(int j = 0; j < size-i-1; j++) {
                        if(arr[j] > arr[j+1]) {
                                int temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                }
        }

        cout<<"Array after sorting:";
        printArray(arr, size);

        return 0;
}
