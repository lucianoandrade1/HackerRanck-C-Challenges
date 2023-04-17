//Hackerrank For Loop in C challenge
//Author: Luciano Andrade

//Objective

//In this challenge, you will learn the usage of the for loop, which is a programming language statement which allows code to be repeatedly executed.

//The syntax for this is

//for ( <expression_1> ; <expression_2> ; <expression_3> )
//    <statement>

//expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
//expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
//expression_3 is generally used to update the flags/variables.

//A sample loop will be

//for(int i = 0; i < 10; i++) {
//    ...
//}

//Task

//For each integer n in the interval [a,b] (given as input) :

//If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
//Else if n > 9 and it is an even number, then print "even".
//Else if n > 9 and it is an odd number, then print "odd".

//Input Format

//The first line contains an integer, a.
//The seond line contains an integer, b.

//Constraints

//1<=a<=b<=10^6

//Output Format

//Print the appropriate english representation,even, or odd, based on the conditions described in the 'task' section.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    char *n_str;
    scanf("%d\n%d", &a, &b);

    for (int n=a; n<=b; n++){

        if (n>=1 && n<=9){

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

            printf("%s\n",n_str);

        }else {

            printf("%s\n", n%2==0 ? "even" : "odd");

        }

    }

    return 0;
}

