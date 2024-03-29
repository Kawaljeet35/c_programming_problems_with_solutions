/*
Armstrong Number

Write a program in C to check if a given number
is an Amstrong number or not.
*/

//Solution:
#include <stdio.h>
#include <math.h>

int isArmstrongNumber(int number) {
    int originalNumber = number;
    int sum = 0;
    int n = 0;

    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number; // 

    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        sum += pow(digit, n);
        originalNumber /= 10;
    }

    return sum == number;
}

int main() {
    int number = 151;
    if (isArmstrongNumber(number)) {
        printf("%d is an Armstrong number\n", number);
    } else {
        printf("%d is not an Armstrong number\n", number);
    }

    return 0;
}
