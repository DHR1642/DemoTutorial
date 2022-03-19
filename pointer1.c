#include <stdio.h>

int main() {

	int x = 7;
	printf("x is %d\n", x);

	x = 14;
	printf("x is %d\n", x);

	int *pointer = &x;

	printf("pointer is %x\n", pointer);

	printf("x is %d\n", *pointer);

	*pointer = 32;

	printf("x is %d %d\n", x, *pointer);
}