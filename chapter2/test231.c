#include <stdio.h>
#include <limits.h>

int tadd_ok(int x, int y)
{
	int sum = x + y;
	return (sum - x == y) && (sum - y == x);
}

int main(int argc, char const *argv[])
{
	int x, y;
	scanf("%d %d", &x, &y);
	if(tadd_ok(x, y))
	{
		printf("OK!\n");
	}
	else
	{
		printf("Overflow!\n");
	}
	return 0;
}