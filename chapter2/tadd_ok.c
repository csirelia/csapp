#include <stdio.h>
#include <limits.h>

//determine whether arguments can be added without overflow
int tadd_ok(int x, int y)
{
	if( (x >= 0 && y <= 0) || (x <= 0 && y >= 0) )
	{
		return 0;
	}
	else
	{
		if(x > 0 && y > 0)
		{
			if(INT_MAX - x < y)
			{
				return 1;
			}
		}
		else
		{
			if(INT_MIN - x > y)
			{
				return -1;
			}
		}
		return 0;
	}
}

//print the output
void printOutput(int x, int y) {
	if(tadd_ok(x, y) == 0) {
		printf("OK!\n");
		return;
	}
	else if(tadd_ok(x, y) == 1) {
		printf("Positive Overflow!\n");
		return;
	}
	else {
		printf("Negative Overflow!\n");
		return;
	}
}

int main(int argc, char const *argv[])
{
	printf("INT_MIN = %d\n", INT_MIN);
	printf("INT_MAX = %d\n", INT_MAX);
	int x, y;
	int ifCon = 1;
	while(ifCon == 1) {
		printf("Please enter two arguments: ");
		scanf("%d %d", &x, &y);
		printOutput(x, y);
		printf("Enter 1 to continue, other numbers to exit: ");
		scanf("%d", &ifCon);
	}
	return 0;
}