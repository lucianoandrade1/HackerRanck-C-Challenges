//Hackerrank Playing With Characters challenge
//Author: Luciano Andrade

//Objective

//This challenge will help you to learn how to take a character, a string and a sentence as input in C.

//To take a single character ch as input, you can use scanf("%c", &ch ); and printf("%c", ch) writes a character specified by the argument char to stdout

//char ch;
//scanf("%c", &ch);
//printf("%c", ch);

//This piece of code prints the character ch.

//You can take a string as input in C using scanf(“%s”, s). But, it accepts string only until it finds the first space.

//In order to take a line as input, you can use scanf("%[^\n]%*c", s); where  is defined as char s[MAX_LEN] where MAX_LEN is the maximum size of s. Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.

//Note: After inputting the character and the string, inputting the sentence by the above mentioned statement won't work. This is because, at the end of each line, a new line character (\n) is present. So, the statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character from the previous line. This can be handled in a variety of ways and one of them being: scanf("\n"); before the last statement.

//Task

//You have to print the character, ch, in the first line. Then print  in next line. In the last line print the sentence, sen.

//Input Format

//First, take a character, sh as input.
//Then take the string, s as input.
//Lastly, take the sentence sen as input.

//Output Format

//Print three lines of output. The first line prints the character, ch.

//The second line prints the string, s.

//The third line prints the sentence, sen.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 128

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];

    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);

    return 0;
}

