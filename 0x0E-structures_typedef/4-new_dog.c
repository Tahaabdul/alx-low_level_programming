#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with the given name, age, and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name.
 * Return: A pointer to the new dog or NULL if memory allocation fails.
 */

struct dog *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog = (struct dog *)malloc(sizeof(struct dog));

	if (newDog == NULL)
		return (NULL);

	newDog->name = (char *)malloc(strlen(name) + 1);
	newDog->owner = (char *)malloc(strlen(owner) + 1);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	strcpy(newDog->name, name);
	newDog->age = age;
	strcpy(newDog->owner, owner);

	return (newDog);
}
