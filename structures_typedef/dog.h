#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - Estructura del perro
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _dog.h_ */
