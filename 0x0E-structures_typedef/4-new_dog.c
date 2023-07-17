#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to dog's name
 * @age: Age of the dog
 * @owner: Pointer to owner
 *
 * Return: Pointer to created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *nameCopy, *ownerCopy;
	int nameLen, ownerLen;

	/* Calculate the lengths of name and owner */
	nameLen = strlen(name);
	ownerLen = strlen(owner);

	/* Allocate memory for the new dog structure */
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	/* Allocate memory for the copies of name and owner */
	nameCopy = malloc((nameLen + 1) * sizeof(char));
	ownerCopy = malloc((ownerLen + 1) * sizeof(char));

	if (nameCopy == NULL || ownerCopy == NULL)
	{
		free(newDog);
		free(nameCopy);
		free(ownerCopy);
		return (NULL);
	}

	/* Copy name and owner to the allocated memory */
	strcpy(nameCopy, name);
	strcpy(ownerCopy, owner);

	/* Set the new dog's attributes */
	newDog->name = nameCopy;
	newDog->age = age;
	newDog->owner = ownerCopy;

	return (newDog);
}

