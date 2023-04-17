//Hackerrank Printing Tokens challenge
//Author: Luciano Andrade

//Given a sentence, s, print each word of the sentence in a new line.

//Input Format

//The first and only line contains a sentence, s.

//Constraints

//1<=len(s)<=1000

//Output Format

//Print each word of the sentence in a new line.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

   char * token = strtok(s, " ");

   while( token != NULL ) {
      printf( "%s\n", token ); //printing each token
      token = strtok(NULL, " ");
   }

    return 0;
}
