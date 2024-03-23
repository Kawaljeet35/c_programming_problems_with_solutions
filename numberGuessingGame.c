/*
Number Guessing Game

Write a program in C which replicates the number guessing game in real life.

The program should generate a random number forehand and prompt the user to 
guess a number between 1 and 100. Depending upon the user guess, the program should suggest
the user to either guess a lower or bigger number.
The program should keep a count on the number of attempts a user takes to guess the 
correct number.

Example Input/Output:
Guess a number between 1 and 100: 50
Enter a smaller number: 25
Enter a bigger number: 37
Enter a smaller number: 31
Enter a smaller number: 28
Enter a bigger number: 29
Congratulations! You guessed the number in 6 attempts.
*/

//Solution:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int random_number,user_guess;
    int num_guess = 0;
    srand(time(NULL));
    random_number = rand() % 100 + 1;
    
    printf("Guess a number between 1 and 100: ");
    scanf("%d",&user_guess);
    
    while(user_guess != random_number)
    {
        if(user_guess < random_number)
        {
            printf("Enter a bigger number: ");
            scanf("%d",&user_guess);
            num_guess++;
        }
        else if(user_guess > random_number)
        {
            printf("Enter a smaller number: ");
            scanf("%d",&user_guess);
            num_guess++;
        }
    }
    num_guess++;
    printf("Congratulations! You guessed the number in %d attempts.",num_guess);
    return 0;
}
