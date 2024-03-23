/*
Prime Checker

Write a program that determines whether the input number is a prime number or not.
The input number will be a positive integer.

Exapmple input/output: 

Enter the number to check: 17
17 is a prime number.

Enter the number to check: 27
27 is a prime number.
*/

//Solution:
#include <stdio.h>

int primeChecker(int n);

int main() {
    int n;
    printf("Enter the number to check: ");
    scanf("%d", &n);
    int result = primeChecker(n);
    if (result == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}

int primeChecker(int n) {
    int isPrime = 1;
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}
