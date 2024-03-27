/*
Program to check if a string is palindrome.

Write a C program to check if a string is palindrome.

Example output:

abcde is not palindrome.
abcba is palindrome.
*/

//Solution:
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *string) {
    int len = strlen(string);
    char lowercase[len + 1];
    strcpy(lowercase, string);
    
    for (int i = 0; i < len; i++) {
        lowercase[i] = tolower(lowercase[i]);
    }
    
    for (int i = 0; i < len / 2; i++) {
        if (lowercase[i] != lowercase[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

void checkPalindrome(char *string) {
    if (isPalindrome(string)) {
        printf("%s is palindrome\n", string);
    } else {
        printf("%s is not palindrome\n", string);
    }
}

int main() {
    checkPalindrome("abcde");
    checkPalindrome("abcba");
    return 0;
}
