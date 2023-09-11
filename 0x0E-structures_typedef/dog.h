#ifndef _DOG_H_
#define _DOG_H_

/**
  * struct dog - initialize a dog struct.
  * @name: name of dog
  * @age: age of dog
  * @owner: owner's name
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
#endif
