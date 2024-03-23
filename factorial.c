/*
Factorial

Write a program in C which takes an integer as an input
and return its factorial.

Example Input/Output:

Enter the number: 3
The factorial of 3 is: 6

Enter the number: 6
The factorial of 6 is: 720
*/

//Solution:
#include <stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("The factorial of %d is: %d\n", n, result);
    return 0;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
