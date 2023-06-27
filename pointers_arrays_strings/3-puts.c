#include "main.h"

/**
 *_puts - String to stdout.
 * @str: The string to be printed.
 *
 * Return: zero if succesful
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
