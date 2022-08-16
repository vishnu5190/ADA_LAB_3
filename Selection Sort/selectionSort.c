//Selection Sort 

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void swap(int *x, int *y) {
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

void selectionSort(int arr[], int n) {
    int i, j, min;
    
    for(i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) 
            if(arr[j] < arr[min])
                min = j;
        
        swap(&arr[min], &arr[i]);
    }
}

void printArr(int arr[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("\t%d\t", arr[i]);
    }
}

void main() {
    int arr[] = {34, 66, 12, 222, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted Array: ");
    printArr(arr, n);
}
