#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *cpyName, *cpyOwner;
	int lenName = 0, lenOwner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[lenName])
		lenName++;
	while (owner[lenOwner])
		lenOwner++;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	cpyName = malloc(lenName + 1);
	if (cpyName == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cpyName[i] = name[i];
	cpyName[i] = '\0';

	cpyOwner = malloc(lenOwner + 1);
	if (cpyOwner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpyOwner[i] = owner[i];
	cpyOwner[i] = '\0';

	newDog->name = cpyName;
	newDog->age = age;
	newDog->owner = cpyOwner;
	return (newDog);
}
