/*
Valid Anagram

Write a program in C to check if two strings are 
anagram or not.
The program should return a boolean.
*/

//Solution:
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isAnagram(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
   
    if (len1 != len2)
        return false;

    int freq1[26] = {0}; 
    int freq2[26] = {0}; 
    
    
    for (int i = 0; i < len1; i++) {
        if (isalpha(str1[i])) { 
            freq1[tolower(str1[i]) - 'a']++;
        }
    }

    for (int i = 0; i < len2; i++) {
        if (isalpha(str2[i])) { 
            freq2[tolower(str2[i]) - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }

    return true; 
}

int main() {
    const char *str1 = "heart";
    const char *str2 = "earth";
    if (isAnagram(str1, str2)) {
        printf("%s and %s are anagrams.\n", str1, str2);
    } else {
        printf("%s and %s are not anagrams.\n", str1, str2);
    }
    return 0;
}
