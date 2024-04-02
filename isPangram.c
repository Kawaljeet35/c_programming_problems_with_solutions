/*
Pangram Checker

A pangram is a sentence where every letter of the English alphabet 
appears at least once.

Given a string sentence, return true if sentence is a pangram, or false otherwise.
*/

//Solution:
#include <stdio.h>
#include <stdbool.h>

bool isAlpha(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isPangram(const char* sentence) {
    bool seen[26] = {false};
    int index;
    while (*sentence != '\0') {
        if (isAlpha(*sentence)) {
            index = tolower(*sentence) - 'a';
            seen[index] = true;
        }
        sentence++;
    }
    for (int i = 0; i < 26; i++) {
        if (!seen[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    const char* test_sentence = "abcde fghijklmn opqrstuvw xyz";
    printf(isPangram(test_sentence) ? "true\n" : "false\n");
    return 0;
}
