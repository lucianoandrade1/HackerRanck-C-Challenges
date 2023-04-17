//Hackerrank Small Triangles, Large Triangles challenge
//Author: Luciano Andrade

//You are given  triangles, specifically, their sides ai, bi and ci. Print them in the same style but sorted by their areas 
//from the smallest one to the largest one. It is guaranteed that all the areas are different.

//The best way to calculate a volume of the triangle with sides a, b and c is Heron's formula:

// S = (p * (p - a) * (p - b) * (p - c))^(1/2) where p = (a + b + c)/2.

//Input Format

//First line of each test file contains a single integer .  lines follow with ,  and  on each separated by single spaces.

//Constraints

//1 <= n <= 100
//1 <= ai,bi,ci <= 100
//ai + bi >= ci, ai + ci >= bi and bi + ci >= ai

//Output Format

//Print exactly n lines. On each line print 3 integers separated by single spaces, which are ai, bi and ci of the corresponding 
//triangle.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

float heron(triangle tr){
    
    float p = (tr.a + tr.b + tr.c)/2.0;
    
    return sqrt(p * (p - tr.a) * (p - tr.b) * (p - tr.c)); 
    
}


void sort_by_area(triangle* tr, int n) {

   int i, j, k;
   triangle tmp;
   for (j = 0; j < n; ++j){
      for (k = j + 1; k < n; ++k){
         if (heron(tr[j]) > heron(tr[k])){
            tmp = tr[j];
            tr[j] = tr[k];
            tr[k] = tmp;
         }
      }
   }

}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	
	free(tr);
	
	return 0;
}
