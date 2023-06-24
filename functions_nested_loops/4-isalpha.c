#include "main.h"

/**
 * _isalpha - Check alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is a letter or  0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}

	return (0);
}
