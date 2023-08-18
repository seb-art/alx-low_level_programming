#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initialize variable, type struct dog
  * @d: pointer to struct dog
  * @name: name the dog
  * @age: age
  * @owner: owner person's name
  *
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
