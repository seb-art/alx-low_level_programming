#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - print a struct dog
  * @d: pointer to struct dog memory block
  *
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	else
	{
		if (d->name == NULL)
			d->name = "(nil)";

		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
