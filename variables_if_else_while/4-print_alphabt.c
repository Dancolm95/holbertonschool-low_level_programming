#include<stdio.h>

/**
 * main - Some letters of alphabet
 *
 * Decription: Prints the alphabet in lowercase except q and e
 *
 * Return: (Success)
 */
int main(void)
{
	char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');

return (0);
}
