#include "dog.h"
#include <stdlib.>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog variable to initialize.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
