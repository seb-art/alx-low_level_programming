#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: variable declared
 * Return: 0 for success or value 98 on faluire
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
