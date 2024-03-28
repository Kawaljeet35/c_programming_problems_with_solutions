/*
Selection Sort

Write a program in C to implement the Selection Sort algorithm and 
sort a given list in ascending order.
*/

//Solution:
#include <stdio.h>

void selectionSort(int array[], int n) {
    int i, j, min, temp;
    
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}

int main() {
    int numbers[] = {8, 3, 7, 4, 1};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    
    selectionSort(numbers, n);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
