#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabetic in lower and upper case
 *
 * Return: Zero if succesfull
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
