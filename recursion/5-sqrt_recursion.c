#include "main.h"

/**
 * root_var - function to compare variables
 * @n: a integer value
 * @var: variable tested
 *
 * Return: var for root -1
 */

int root_var(int n, int var)
{
	if (var * var == n)
		return (var);
	if (var * var < n)
		return (root_var(n, var + 1));
	return (-1);
}

/**
 * sqrt_recursion - function that returns the natural square root of a number
 * @n: integer number
 *
 * Return: 0 if succesful
 *
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 1)
		return (-1);
	return (root_var(n, 2));
}
