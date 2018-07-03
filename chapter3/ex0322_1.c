#include <stdio.h>

int nOverflow()
{
	int product = 1;
	int newProduct = 2;
	int count = 2;
	while(newProduct > product)
	{
		count++;
		product = newProduct;
		newProduct = newProduct * count;
	}
	return (count - 1);
}

int main(int argc, char const *argv[])
{
	printf("%d\n", nOverflow());
	return 0;
}