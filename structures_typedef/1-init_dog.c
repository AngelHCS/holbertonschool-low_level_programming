#include <stdio.h>
#include "dog.h"
/**
 * init_dog - fetch the dog
 * @d: struct name
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
