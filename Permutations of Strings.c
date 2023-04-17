//Hackerrank Permutations of Strings challenge

//Strings are usually ordered in lexicographical order. That means they are ordered by comparing their leftmost different characters. For example, abc < abd because c < d. Also z > yyy because z > y. If one string is an exact prefix of the other it is lexicographically smaller, e.g., gh < ghij.

//Given an array of strings sorted in lexicographical order, print all of its permutations in strict lexicographical order. If two permutations look the same, only print one of them.

//Complete the function next_permutation which generates the permutations in the described order.

//For example, s=[ab, bc, cd]. The six permutations in correct order are:

//ab bc cd
//ab cd bc
//bc ab cd
//bc cd ab
//cd ab bc
//cd bc ab

//Note: There may be two or more of the same string as elements of .

//For example, s=[ab, ab, bc]. Only one instance of a permutation where all elements match should be printed. In other words, if s[0] = s[1], then print either s[0] s [1] or s[1] s[0] but not both.

//A three element array having three discrete elements has six permutations as shown above. In this case, there are three matching pairs of permutations where  and  are switched. We only print the three visibly unique permutations:

//ab ab bc
//ab bc ab
//bc ab ab

//Input Format

//The first line of each test file contains a single integer n, the length of the string array s.

//Each of the next n lines contains a string s[i].

//Constraints

//2<=n<=9
//1<=|s[i]|<=10
//s[i] contains only lowercase English letters.

//Output Format

//Print each permutation as a list of space-separated strings on a single line.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **x, char **y)
{
    char *z = *x;
    *x = *y;
    *y = z;
}

void reverse(int len, char **s)
{

    for (int i = 0; i <= len / 2; i++) {
        if (i == len - i)
            continue;
        swap(&s[i], &s[len - i]);
    }
}

int next_permutation(int n, char **s)
{
    int j, k;

    for (j = n - 2; j >= 0; j--)
        if (strcmp(s[j], s[j + 1]) < 0)
            break;
    if (j < 0)
        return 0;

    for (k = n - 1; k > j; k--)
        if (strcmp(s[j], s[k]) < 0)
            break;
    
    swap(&s[j], &s[k]);

    reverse(n - j - 2, &s[j + 1]);

    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}


