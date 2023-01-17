#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - creates a struct "dog"
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog new_dog;
#endif
