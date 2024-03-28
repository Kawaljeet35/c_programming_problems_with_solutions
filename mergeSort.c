/*
Merge Sort

Write a program in C to implement the Merge Sort algorithm and 
sort a given list in ascending order.
*/

//Solution:
#include <stdio.h>
#include <stdlib.h>

void merge(int array[], int left[], int right[], int left_size, int right_size) {
    int i = 0, j = 0, k = 0;

    while (i < left_size && j < right_size) {
        if (left[i] <= right[j]) {
            array[k++] = left[i++];
        } else {
            array[k++] = right[j++];
        }
    }

    while (i < left_size) {
        array[k++] = left[i++];
    }

    while (j < right_size) {
        array[k++] = right[j++];
    }
}

void mergeSort(int array[], int n) {
    if (n <= 1) {
        return; 
    }

    int mid = n / 2;
    int *left = malloc(mid * sizeof(int));
    int *right = malloc((n - mid) * sizeof(int));

    for (int i = 0; i < mid; i++) {
        left[i] = array[i];
    }

    for (int i = mid; i < n; i++) {
        right[i - mid] = array[i];
    }

    mergeSort(left, mid);
    mergeSort(right, n - mid);
    merge(array, left, right, mid, n - mid);

    free(left);
    free(right);
}

int main() {
    int numbers[] = {8, 3, 7, 4, 1};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    mergeSort(numbers, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

/*
Time Complexity:
    Best Case: O(n log n)
    Average Case: O(n log n)
    Worst Case: O(n log n)
Space Complexity: O(n)
*/
