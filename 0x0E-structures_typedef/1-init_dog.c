#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog.
 * @d: Name of dog structure.
 * @name : Name of doggo.
 * @age : Age of doggo.
 * @owner : Who owns doggo.
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
