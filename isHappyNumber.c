/*
Happy Number

Write a program in C to check if a given number
is a Happy number or not.
*/

//Solution:
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isHappy(int number) {
    if (number == 1) {
        return true;
    } else {
        int seen[1000] = {0};
        int count = 0;
        while (number != 1 && !seen[number]) {
            seen[number] = 1;
            int sum_of_squares = 0;
            char str[20]; 
            snprintf(str, 20, "%d", number);
            for (int i = 0; str[i] != '\0'; i++) {
                int digit = str[i] - '0';
                sum_of_squares += digit * digit;
            }
            number = sum_of_squares;
            count++;
        }
        return number == 1;
    }
}

int main() {
    printf("%d\n", isHappy(19));
    return 0;
}
