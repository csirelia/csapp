#include <stdio.h>

void inplace_swap(int *x, int *y) {
	*y = *x ^ *y;
	printf("step1: %d %d\n", *x, *y);
	*x = *x ^ *y;
	printf("step2: %d %d\n", *x, *y);
	*y = *x ^ *y;
	printf("step3: %d %d\n", *x, *y);
}

int main(int argc, char const *argv[])
{
	int a = 3, b = 5;
	int *pa = &a;
	int *pb = &b;
	inplace_swap(pa, pb);
	return 0;
}