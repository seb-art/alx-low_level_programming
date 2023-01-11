#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size: parameter for the size of the array
 * @c: char variable
 * Return: pointer to the array or NULL if the size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';
	return (p);
}
