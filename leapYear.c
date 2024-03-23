/*
Leap Year Checker

Create a program that determines whether a given year is a leap year. 
A leap year is a year that is divisible by 4, but not divisible by 100 unless 
it is also divisible by 400.

The program should take a year as input and print "The year {input year} is a leap year" if it is a leap 
year, and "The year {input year} is not a leap year" otherwise.

Example Input/Output:

Enter year to check: 1957
The year 1957 is not a leap year.

Enter year to check: 2024
The year 2024 is a leap year.
*/

//Solution 1:
#include <stdio.h>

int main() {
    int year;
    printf("Enter year to check: ");
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("The year %d is a leap year.",year);
            }
            else
            {
                printf("The year %d is not a leap year.",year);
            }
        }
        else
        {
            printf("The year %d is a leap year.",year);
        }
    }
    else
    {
        printf("The year %d is not a leap year.",year);
    }
    return 0;
}

//Solution 2:
#include <stdio.h>

int main() {
    int year;
    printf("Enter year to check: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("The year %d is a leap year.\n", year);
    } else {
        printf("The year %d is not a leap year.\n", year);
    }

    return 0;
}
