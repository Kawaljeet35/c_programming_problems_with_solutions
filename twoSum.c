/*
Two Sum

Given an array of integers nums and an integer target, write a program in C to 
return indices of the two numbers such that they add up to target.

Example input/Output:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]

Input: nums = [3,2,4], target = 6
Output: [1,2]
*/

//Solution:
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int indexMap[100000] = {0}; 
    static int result[2]; 
    
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        if (complement >= 0 && indexMap[complement] != 0) {
            result[0] = indexMap[complement] - 1;
            result[1] = i;
            *returnSize = 2;
            return result;
        }
        indexMap[nums[i]] = i + 1;
    }
    
    *returnSize = 0;
    return result;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);
    if (returnSize == 2) {
        printf("[%d, %d]\n", result[0], result[1]);
    } else {
        printf("Target not found\n");
    }
    return 0;
}
