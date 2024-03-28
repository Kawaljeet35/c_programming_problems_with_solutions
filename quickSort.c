/*
Quick Sort

Write a program in C to implement the Quick Sort algorithm and 
sort a given list in ascending order.
*/

//Solution:
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int left, int right) {
    int pivot = array[right]; 
    int i = left - 1; 

    for (int j = left; j < right; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    
    swap(&array[i + 1], &array[right]);

    return i + 1; 
}

void quickSort(int array[], int left, int right) {
    if (left < right) {
        int partitionIndex = partition(array, left, right);

        quickSort(array, left, partitionIndex - 1);
        quickSort(array, partitionIndex + 1, right);
    }
}

int main() {
    int array[] = {8, 3, 7, 4, 1};
    int n = sizeof(array) / sizeof(array[0]);

    quickSort(array, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}


/*
Time Complexity:
    Best Case: O(n log n)
    Average Case: O(n log n)
    Worst Case: O(n^2)
Space Complexity: O(n)
*/
