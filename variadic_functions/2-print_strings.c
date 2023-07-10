#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @n: is the number of strings passed to the function
 * @separator: the string to be printed between the strings
 *
 * Return: always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	char *str;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if ((a != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
