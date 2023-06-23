#include<stdio.h>

/**
 * main - hexadecimal numbers
 *
 * Description: Prints all the numbers of base sixteen
 *
 * Return: Zero if succesful
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9' ; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
