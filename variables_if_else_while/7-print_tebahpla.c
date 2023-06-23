#include<stdio.h>

/**
 * main - the alphabet
 *
 * Descriptión: Print the alphabet in reverse
 *
 * Return: Always(success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

