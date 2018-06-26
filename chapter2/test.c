#include <stdio.h>

int main(int argc, char const *argv[])
{
	short int v = -12345;
	unsigned short uv = (unsigned short) v;
	printf("v = %d uv = %u\n", v, uv);

	int x = -1;
	unsigned u = 2147483648;
	printf("%d %u\n", x, x);
	printf("%d %u\n", u, u);
	return 0;
}