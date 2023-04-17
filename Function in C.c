//Hackerrank Functions in C challenge
//Author: Luciano Andrade

//Objective

//In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements glued together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.

//You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

//Input Format

//Input will contain four integers -a, b, c, d, one in each line.

//Output Format

//Print the greatest of the four integers.

//Note: I/O will be automatically handled

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){

    return (a > b ? a : b) > (c > d ? c : d) ? (a > b ? a : b) : (c > d ? c : d);

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

