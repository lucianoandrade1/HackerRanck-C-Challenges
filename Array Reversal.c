//HackerRank Array Reversal challenge
//Author: Luciano Andrade

//Given an array, of size n, reverse it.

//Example: If array, arr=[1,2,3,4,5], after reversing it, the array should be, arr=[5,4,3,2,1] .

//Input Format

//The first line contains an integer, n, denoting the size of the array. The next line contains n space-separated integers 
//denoting the elements of the array.

//Constraints

// 1 <= n <= 1000
// 1 <= arri <= 1000, where arri is the ith element of the array.

//Output Format

//The output is handled by the code given in the editor, which would print the array.

#include <stdio.h>

int main() {

    int n;
    printf("How many number? ");                  
    scanf("%d", &n);
  
    int arr[n];
    printf("Enter the %d numbers to reverse: ",n);                  
    for(int i=0; i<n; i++)                                            
        scanf("%d", &arr[i]);

    int aux[n];
    int i,j;
    for (i = n - 1, j = 0; i >= 0; i--, j++)
        aux[j] = arr[i];

    for (i = 0; i < n; i++)
        arr[i] = aux[i];

    printf("Reverse array is: ");

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

