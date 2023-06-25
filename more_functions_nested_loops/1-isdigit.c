#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Function that checks for a digit
 * @c: character to evaluate
 *
 * Return: 1 if c is digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
