//Hackerrank Boxes through a Tunnel challenge
//Author: Luciano Andrade

//You are transporting some boxes through a tunnel, where each box is a parallelepiped, and is characterized by its length, width and height.

//The height of the tunnel 41 feet and the width can be assumed to be infinite. A box can be carried through the tunnel only if its height is strictly less than the tunnel's height. Find the volume of each box that can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.

//Input Format

//The first line contains a single integer n, denoting the number of boxes.

// lines follow with three integers on each separated by single spaces lengthi , widthi and heighti which are length, width and height in feet of the -th box.

//Constraints

//1<=n<=100
//1<=lengthi, widthi, heighti<=100

//Output Format

//For every box from the input which has a height lesser than 41 feet, print its volume in a separate line.

#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{

    int length;
    int width;
    int height;

};

typedef struct box box;

int get_volume(box b) {

    return b.height * b.length * b.width;

}

int is_lower_than_max_height(box b) {

    if (b.height < MAX_HEIGHT)
        return 1;
    else return 0;

}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}


