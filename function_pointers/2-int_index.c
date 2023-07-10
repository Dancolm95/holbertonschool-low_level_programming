#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer.
 * @array: array of integers
 * @cmp: pointer to the function to be used to compare values
 * @size: number of elements in the array.
 * @a: value
 * Return: -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array != 0 && size > 0 && cmp != 0)
	{
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	else
		return (-1);
	return (-1);
}
