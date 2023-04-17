//Hackerrank Sorting Array of Strings challenge
//Author: Luciano Andrade

//To sort a given array of strings into lexicographically increasing order or into an order in which the string with the lowest length appears first, a sorting function with a flag indicating the type of comparison strategy can be written. The disadvantage with doing so is having to rewrite the function for every new comparison strategy.

//A better implementation would be to write a sorting function that accepts a pointer to the function that compares each pair of strings. Doing this will mean only passing a pointer to the sorting function with every new comparison strategy.

//Given an array of strings, you need to implement a string_sort function which sorts the strings according to a comparison function, i.e, you need to implement the function :

//void string_sort(const char **arr,const int cnt, int (*cmp_func)(const char* a, const char* b)){
    
//}

//The arguments passed to this function are:

//an array of strings : arr
//length of string array: count
//pointer to the string comparison function: cmp_func

//You also need to implement the following four string comparison functions:

//int lexicographic_sort to sort the strings in lexicographically non-decreasing order.

//int lexicographic_sort_reverse to sort the strings in lexicographically non-increasing order.

//int sort_by_number_of_distinct_characters to sort the strings in non-decreasing order of the number of distinct characters present in them. If two strings have the same number of distinct characters present in them, then the lexicographically smaller string should appear first.

//int sort_by_length to sort the strings in non-decreasing order of their lengths. If two strings have the same length, then the lexicographically smaller string should appear first.

//Input Format

//You just need to complete the function string\_sort and implement the four string comparison functions.

//Constraints

//1 <= No. of Strings <= 50
//1 <= Total Length of all the strings <= 2500

//You have to write your own sorting function and you cannot use the inbuilt qsort function

//The strings consists of lower-case English Alphabets only.

//Output Format

//The locked code-stub will check the logic of your code. The output consists of the strings sorted according to the four comparsion functions in the order mentioned in the problem statement.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int countDistinct(const char* str){
    int count = 0;

    for (int i = 0; i < strlen(str); i++){
         bool isSame = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  isSame = true;
                  break;
              }
         }

         if (!isSame){
             count++;
         }
    }

    return count;
}

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a,b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b,a);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    
    int res = countDistinct(a) - countDistinct(b);
    return res == 0 ? lexicographic_sort(a, b) : res;
    
}

int sort_by_length(const char* a, const char* b) {
    
    int res = strlen(a) - strlen(b);
    return res == 0 ? lexicographic_sort(a, b) : res;

}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    
    for (int i = 0; i < len - 1; i++){
        for (int j = i + 1; j < len; j++){
            if ((*cmp_func)(*(arr + i), *(arr + j)) > 0){
                char *tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    printf("\nlexicographic_sort \n");
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
    
    printf("lexicographic_sort_reverse \n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
    
    printf("sort_by_length \n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");
    
    printf("sort_by_number_of_distinct_characters \n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
    
    free(arr);
}
