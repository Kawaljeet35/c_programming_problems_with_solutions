/*
Binary Search

Write a program in C to implement the Binary Search algorithm and 
search for a given key in the provided sorted list of numbers. 
*/

//Solution:
#include <stdio.h>

int binarySearch(int array[], int size, int key) {
    int low = 0;
    int high = size - 1;
    int key_found = 0; 
    
    while (low <= high && !key_found) {
        int mid = (low + high) / 2;

        if (key == array[mid]) {
            key_found = 1;
        } else if (key > array[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return key_found;
}

int main() {
    int array[] = {2, 5, 7, 9, 11, 13, 17, 19, 21, 33};
    int key = 7;
    int size = sizeof(array) / sizeof(array[0]);

    int result = binarySearch(array, size, key);
    
    if (result) {
        printf("Key is found\n");
    } else {
        printf("Key is not found\n");
    }

    return 0;
}

/*
Time Complexity:
    Best Case: O(1)
    Average Case: O(log n)
    Worst Case: O(log n)
Space Complexity: O(1)
*/
