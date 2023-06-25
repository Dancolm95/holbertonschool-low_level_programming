#include "main.h"
#include <stdio.h>

/**
 * _isupper - check upper case
 * @c: the caracter
 *
 * Return: 1 for positive and 0 for negative
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
