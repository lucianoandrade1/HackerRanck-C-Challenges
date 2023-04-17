//HackerRank Digit Frequency challenge
//Author: Luciano Andrade

//Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

//Input Format

//The first line contains a string, num which is the given number.

//Constraints

//1 <= len(num) <= 1000

//All the elements of num are made of english alphabets and digits.

//Output Format

//Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countDigits( char* s, char c )
{
    return *s == '\0' ? 0 : countDigits( s + 1, c ) + (*s == c);
}    


int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for (int i=0;i<10;i++){
        int count = countDigits( s, (char) i + '0');
        printf("%d ",count);
    }
    
    free(s);
    
    return 0;
}
