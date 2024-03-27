/*
Bubble Sort

Write a program in javascript to implement the Bubble Sort algorithm and 
sort a given list in ascending order.
*/

//Solution:
#include <stdio.h>

void bubbleSort();

int main() {
    bubbleSort();
    return 0;
}

void bubbleSort() {
    int arr[] = {8, 3, 7, 4, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    int swapped, i, j;

    for (i = 0; i < length - 1; i++) {
        swapped = 0; 
        for (j = 0; j < length - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break; 
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}