#include <stdio.h>
#include "dog.h"



/**
 * init_dog - initializes a struct type dog
 * @d: pointerto initialize struct dog to
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
