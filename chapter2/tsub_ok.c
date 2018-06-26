#include <stdio.h>
#include <limits.h>

//determine whether arguments can be added without overflow
int tadd_ok(int x, int y)
{
	if( (x >= 0 && y <= 0) || (x <= 0 && y >= 0) )
	{
		return 1;
	}
	else
	{
		if(x > 0 && y > 0)
		{
			if(INT_MAX - x < y)
			{
				return 0;
			}
		}
		else
		{
			if(INT_MIN - x > y)
			{
				return 0;
			}
		}
		return 1;
	}
}

int tsub_ok(int x, int y)
{
	if(y == INT_MIN)
	{
		if(x != INT_MAX)
		{
			return tadd_ok(x + 1, INT_MAX);
		}
		else
		{
			return 0;
		}
	}
	return tadd_ok(x, -y);
}

//print the output
void printOutput(int x, int y) {
	if(tsub_ok(x, y)) 
	{
		printf("OK!\n");
		return;
	}
	else 
	{
		printf("Overflow!\n");
		return;
	}
}

int main(int argc, char const *argv[])
{
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