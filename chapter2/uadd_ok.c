#include <stdio.h>
#include <limits.h>

int uadd_ok(unsigned x, unsigned y) {
	if(UINT_MAX - x >= y) {
		return 1;
	}
	else {
		return 0;
	}
}

int main(int argc, char const *argv[])
{
	unsigned x, y;
	printf("Please enter two arguments: ");
	scanf("%u %u", &x, &y);
	if(uadd_ok(x, y)) {
		printf("OK!\n");
	}
	else
		printf("Overflow!\n");
	return 0;
}