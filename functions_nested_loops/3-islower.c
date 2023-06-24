#include "main.h"

/**
 * _islower - Checks caracter in lower case
 * @c - character for check
 *
 * Return: Returns 1 if c is lowercase or Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
