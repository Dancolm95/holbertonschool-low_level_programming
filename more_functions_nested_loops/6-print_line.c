#include "main.h"

/**
 * print_line - Function to print a new line
 * @n: integer number
 *
 * Return: zero if succesful
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
