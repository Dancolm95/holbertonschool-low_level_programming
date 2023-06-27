#include "main.h"

/**
 *_puts_recursion - Print a String
 * @s: Value of a string
 *
 * Return: 0 if succesful
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
