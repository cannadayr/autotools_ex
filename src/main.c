#include<stdio.h>
#include"struct.h"

int main() {
	printf("\nHello there!\n");
	X x;
	x.is_retired = 1;

	printf("The object x is_retired=%d\n",x.is_retired);
	return 0;
}
