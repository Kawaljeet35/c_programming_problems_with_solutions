/*
Insertion Sort

Write a program in C to implement the Insertion Sort algorithm and 
sort a given list in ascending order.
*/

//Solution:
#include <stdio.h>

void insertionSort(int array[], int n) {
    int i, j, current_element;
    
    for (i = 1; i < n; i++) {
        current_element = array[i];
        j = i;
        
        while (j > 0 && array[j - 1] > current_element) {
            array[j] = array[j - 1];
            j--;
        }
        
        array[j] = current_element;
    }
}

int main() {
    int array[] = {8, 3, 7, 4, 1};
    int n = sizeof(array) / sizeof(array[0]);

    insertionSort(array, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

/*
Time Complexity:
  Best Case: O(n)
  Average Case: O(n^2)
  Worst Case: O(n^2)
Space Complexity: O(1)
*/
