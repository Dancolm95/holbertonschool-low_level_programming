#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 *new_dog - function that creates a new dog
 *
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 *
 * Return: Zero if succesful
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int lowner, lname, i, j;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	lowner = strlen(owner);
	lname = strlen(name);

	new_dog->name = malloc(lname + 1);
	new_dog->owner = malloc(lowner + 1);

	if (new_dog->owner == NULL || new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}
	for (i = 0; i < lname + 1; i++)
	{
		new_dog->name[i] = name[i];
	}
		new_dog->age = age;

	for (j = 0; j < lowner + 1; j++)
	{
		new_dog->owner[j] = owner[j];
	}
		return (new_dog);
}
