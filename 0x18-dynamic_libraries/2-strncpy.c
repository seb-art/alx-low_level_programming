#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: destination of the copied string
 * @src: source of the string to copy
 * @n: number of bytes
 * Return: 0 (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[x] = src[x];
	}
	for ( ; x < n; x++)
		dest[x] = '\0';
	return (dest);
}

