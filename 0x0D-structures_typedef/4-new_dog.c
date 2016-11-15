#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *doggy;

	for (nlen = 0; name[nlen]; nlen++)
		;
	for (olen = 0; owner[olen]; olen++)
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc((nlen + 1) * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; doggy->name[i]; i++)
		doggy->name[i] = name[i];
	doggy->age = age;

	doggy->owner = malloc(olen * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; doggy->owner[i]; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
