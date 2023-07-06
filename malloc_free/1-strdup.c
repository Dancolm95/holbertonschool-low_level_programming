#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to returns a pointer to a newly allocated space in memory
 * @str: string copied
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *s;
	int a, b;

	if (str == 0)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	a++;
	s = malloc(a * sizeof(*s));
	if (s == 0)
		return (NULL);
	for (b = 0; b < a; b++)
		s[b] = str[b];
	return (s);
}
