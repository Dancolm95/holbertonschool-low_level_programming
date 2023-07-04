#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function thats free memory
 * @d: a pointer
 * Return: Always
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
