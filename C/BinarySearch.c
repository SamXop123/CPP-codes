#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;
    int mid;
  
    while (left <= right) {
      
        mid = (left + right) / 2;
      
        if (arr[mid] == x) {
            return mid;  
        }  
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}


int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int x = 40;

    int result = binarySearch(arr, n, x);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
