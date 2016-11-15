#include "dog.h"
#include <stdio.h>
/**
  * main - define function
  * @void - describe argument
  * Return: what does it return?
  */
void print_dog(struct dog *d)
{
	struct dog my_dog;

	my_dog = *d;
	printf("Name: %s\nAge: %f\nOwner: %s\n", my_dog.name, my_dog.age, my_dog.owner);
}
