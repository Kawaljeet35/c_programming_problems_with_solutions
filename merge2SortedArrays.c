"""
Merge 2 Sorted Arrays/Lists

Write a program in python that takes two sorted integer arrays/lists
as input and merge them so that the items are in a non-descending order.
"""

#Solution:
#include <stdio.h>
#include <stdlib.h>

int* mergeSortedArrays(int* list1, int size1, int* list2, int size2) {
    if (size1 == 0) {
        return list2;
    }
    if (size2 == 0) {
        return list1;
    }

    int* mergedList = (int*)malloc((size1 + size2) * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            mergedList[k++] = list1[i++];
        } else {
            mergedList[k++] = list2[j++];
        }
    }
    while (i < size1) {
        mergedList[k++] = list1[i++];
    }

    while (j < size2) {
        mergedList[k++] = list2[j++];
    }

    return mergedList;
}

int main() {
    int list1[] = {1, 3, 5, 7, 9};
    int list2[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(list1) / sizeof(list1[0]);
    int size2 = sizeof(list2) / sizeof(list2[0]);

    int* mergedList = mergeSortedArrays(list1, size1, list2, size2);
    int mergedSize = size1 + size2;

    printf("[");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d", mergedList[i]);
        if (i < mergedSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    free(mergedList); 

    return 0;
}
