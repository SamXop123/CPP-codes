#include <stdio.h>
#include <stdlib.h>

#define BUCKETS 10

void insertionSort(int arr[], int n) {
    for(int i=1;i<n;i++) {
        int key = arr[i], j=i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void bucketSort(int arr[], int n) {
    int i,j;
    int buckets[BUCKETS][n];
    int count[BUCKETS];
    for(i=0;i<BUCKETS;i++) count[i]=0;
    
    // Distribute elements into buckets
    for(i=0;i<n;i++) {
        int idx = arr[i]/10; // simple hash function for 0-99
        buckets[idx][count[idx]++] = arr[i];
    }
    
    // Sort each bucket and put back into array
    int k=0;
    for(i=0;i<BUCKETS;i++) {
        insertionSort(buckets[i], count[i]);
        for(j=0;j<count[i];j++) arr[k++] = buckets[i][j];
    }
}

int main() {
    int arr[] = {29, 25, 3, 49, 9, 37, 21, 43};
    int n = sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr, n);
    printf("Sorted array: ");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    return 0;
}
