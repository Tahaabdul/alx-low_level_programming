#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of dog struct
 * @d: pointer to structure
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
