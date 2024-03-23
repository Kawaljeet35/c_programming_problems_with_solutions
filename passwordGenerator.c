/*
Password Generator

Write a C program that generates secure passwords of varying lengths according 
to specified criteria. 
The program should prompt the user to input the desired password 
length within a range of 6 to 20 characters.
The password should be randomly generated and must contain 2 numbers, 2 symbols 
and both the lowercase and the uppercase alphabets.

Example Input/Output:

Enter desired password length: 12
Here is your password: pR@5sW8!qL2Z
*/

//Solution:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword();

int main() {
    generatePassword();
    return 0;
}

void generatePassword() {
    srand(time(NULL));

    char lowerAlphabets[] = "abcdefghijklmnopqrstuvwxyz";
    char upperAlphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char numbers[] = "123456789";
    char symbols[] = "!@#$%^&*?";

    int passLength;
    printf("Enter desired password length: ");
    scanf("%d", &passLength);

    if (passLength < 6 || passLength > 20) {
        printf("Please enter a password length between 6 and 20\n");
        generatePassword();
        return;
    }

    char password[passLength + 1];
    password[passLength] = '\0';

    for (int i = 0; i < 2; i++) {
        password[i] = numbers[rand() % 9];
    }

    for (int i = 0; i < 2; i++) {
        password[i + 2] = symbols[rand() % 9];
    }

    for (int i = 4; i < passLength; i++) {
        int choice = rand() % 2;
        if (choice == 0) {
            password[i] = lowerAlphabets[rand() % 26];
        } else {
            password[i] = upperAlphabets[rand() % 26];
        }
    }

    for (int i = 0; i < passLength; i++) {
        int j = rand() % passLength;
        char temp = password[i];
        password[i] = password[j];
        password[j] = temp;
    }

    printf("Here is your password: %s\n", password);
}
