//RackerRank Conditional Statements in C challenge
//Author: Luciano Andrade

//Task

//Given a positive integer denoting , do the following:

//If 1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
//If n>9, print Greater than 9.

//Input Format

//The first line contains a single integer denoting n.

//Constraints

//1 <= n <= 10^9

//Output Format

//If 1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.); otherwise, 
//print Greater than 9 instead.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char *n_str, *ptr;

    scanf("%s", n_str);

    long n = strtol(n_str, &ptr, 10);

    switch (n){
        case 1:
            n_str = "one";
          break;
        case 2:
            n_str = "two";
          break;
        case 3:
            n_str = "three";
          break;
        case 4:
            n_str = "four";
          break;
          
        case 5:
            n_str = "five";
          break;
        case 6:
            n_str = "six";
          break;
        case 7:
            n_str = "seven";
          break;
        case 8:
            n_str = "eight";
          break;
        case 9:
            n_str = "nine";
          break;
        default:
            n_str = "Greater than 9";
    }

    printf("%s",n_str);

    return 0;
}

