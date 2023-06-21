#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the number stored in the variable n is positive or negative
 *
 * return: Success
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n;
	}
	if else(n == 0)
	{
	printf("%d is zero\n", n;
	}
	if else(n < 0)
	{
	printf("%d is negative\n", n;
	}

	return (0);
}
