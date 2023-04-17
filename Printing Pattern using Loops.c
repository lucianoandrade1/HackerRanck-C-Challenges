//Hackerrank Printing Pattern using Loops challenge
//Author: Solution sujested in:
//https://stackoverflow.com/questions/54215582/printing-pattern-using-loops

//In this problem, you need to print the pattern of the following form containing the numbers from 1 to n.

//Input Format

//The input will contain a single integer n.

//Constraints

//1 <= m <= 1000

//Output Format

//Print the pattern mentioned in the problem statement.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        for(int j = n; j > i; j--)
            printf("%d ", j);
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i);
        for(int j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }

    for(int i = 1; i < n; i++){
        for(int j = n; j > i; j--)
            printf("%d ", j);
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i + 1);
        for(int j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}

