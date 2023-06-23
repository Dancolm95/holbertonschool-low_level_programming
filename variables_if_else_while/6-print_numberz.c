#include<stdio.h>

/**
 * main - numbers of base ten
 *
 * Description: Prints numbers of base ten startin zero
 *
 * Return: Zero if succesful
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9' ; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
