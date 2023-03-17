#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Generates a random number and determines its sign.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(NULL));
	number = rand();
	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}

