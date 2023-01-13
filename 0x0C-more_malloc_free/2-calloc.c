#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of the array
 * Return: the pointer to the allocated memory of NULL on fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;
	return (array);
}
