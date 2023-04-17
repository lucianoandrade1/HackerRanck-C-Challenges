//HackerRank 1D Arrays in C challenge
//Author: Luciano Andrade

//An array is a container object that holds a fixed number of values of a single type. To create an array in C, we can do int 
//arr[n];. Here, arr, is a variable array which holds up to 10 integers. The above array is a static array that has memory 
//allocated at compile time. A dynamic array can be created in C, using the malloc function and the memory is allocated on the 
//heap at runtime. To create an integer array, arr of size n, int *arr = (int*)malloc(n * sizeof(int)), where arr points to 
//the base address of the array.

//In this challenge, you have to create an array of size n dynamically, input the elements of the array, sum them and print 
//the sum of the elements in a new line.

//Input Format

//The first line contains an integer, n.
//The next line contains n space-separated integers.

//Constraints

//1 <= n <= 1000
//1 <= ai <= 1000

//Output Format

//Print in a single line the sum of the integers in the array.


#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int n) 
{ 
    int sum = 0;
  
    for (int i = 0; i < n; i++) 
    sum += arr[i]; 
  
    return sum; 
}

int main() {

    int n;
    printf("How many integers? ", n);                  
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    
    printf("Enter the %d space-separated integers: ", n);                  
    for(int i=0; i<n; i++)                                            
        scanf("%d", &arr[i]);

    printf("Sum of given array is %d", sum(arr, n));
    
    free(arr);

    return 0;
}
