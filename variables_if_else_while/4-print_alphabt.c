#include<stdio.h>

/**
 * Main - Prints some letters of alphabet
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
