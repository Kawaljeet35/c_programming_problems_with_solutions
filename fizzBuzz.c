/*
FizzBuzz Problem

Write a program that prints the numbers from 1 to 100. 
But for multiples of 3, print "Fizz" instead of the number, and for 
the multiples of 5, print "Buzz". 
For numbers which are multiples of both three and five, print "FizzBuzz".
Each number should be printed on a new line.

Example Output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
...
*/

//Solution:
#include <stdio.h>

int main() {
    int i;
    for(i=1;i<101;i++){
     if(i%3==0 && i%5==0)
     {
         printf("FizzBuzz\n");
     }
     else if(i%3==0)
     {
         printf("Fizz\n");
     }
     else if(i%5==0)
     {
         printf("Buzz\n");
     }
     else
     {
         printf("%d\n",i);
     }
    }
    return 0;
}
