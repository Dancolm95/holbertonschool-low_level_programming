#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array: pointer to array
 * @size: array size
 * @action: pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != 0 && action != 0)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
