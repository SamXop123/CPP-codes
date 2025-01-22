
#include <iostream>
using namespace std;

// SELECTION SORT
// The inner loop selects the minimum element in the unsorted array and places the elements in increasing order.
// Time complexity = O(n^2)

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

    cout << "Enter the size of array: ";
    cin>>size;

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
    for(int i = 0; i < size; i++) {

        int smallest = i;

        for(int j = i+1; j < size; j++) {
            if(arr[smallest] > arr[j]) {
                smallest = j;
            }
        }

        int temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
    }

    cout << "Array after sorting:";
    printArray(arr, size);

}

