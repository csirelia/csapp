#include <stdio.h>

int div16(int getValue)
{
	int divBy16 = getValue >> 4;
	//int divBy16 = getValue / 16;
	return divBy16;
}

int main(int argc, char const *argv[])
{
	int getValue;
	scanf("%d", &getValue);
	printf("Divided by 16: %d\n", div16(getValue));
	return 0;
}