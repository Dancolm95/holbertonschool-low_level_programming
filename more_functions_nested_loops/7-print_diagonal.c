#include "main.h"

/**
 * print_diagonal - print symbols
 * @n: integer number
 *
 * Return: Zero is succesful
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (b != a)
				_putchar(' ');
				else if (b == a)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
	_putchar('\n');
}

