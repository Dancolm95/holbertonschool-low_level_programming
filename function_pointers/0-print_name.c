#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function to print a name
 * @name: string
 * @f: pointer
 *
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && *name != '\0' && f != 0)
		f(name);
}
