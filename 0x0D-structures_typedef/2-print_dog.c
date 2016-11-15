#include "dog.h"
#include <stdio.h>
/**
  * print_dog - prints the dog struct
  * @d: pointer to the dog struct
  */
void print_dog(struct dog *d)
{
	struct dog _dog;

	if (d)
	{
		_dog = *d;
		printf("Name: %s\nAge: %f\nOwner: %s\n", _dog.name, _dog.age, _dog.owner);
	}
}
