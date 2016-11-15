#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - initialize struct dog.
  * @d: name of struct
  * @name: name of dog in struct
  * @age: age of dog in struct
  * @owner: name of owner of dog in struct
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
