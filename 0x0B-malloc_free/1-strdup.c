#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: NULL if str = NULL, pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		dup[i] = str[i];
		len++;
	}
	dup[len] = '\0';
	return (dup);
}
