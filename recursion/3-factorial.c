#include "main.h"

/**
 * factorial - function returns the factorial of number
 * @n: integer number
 *
 * Return: -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
