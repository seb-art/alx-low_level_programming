#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: the string to a append to
 * @src: the string to append
 * @n: number of bytes
 * Return: 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int len_of_dest = 0;

	while (dest[x++])
		len_of_dest++;
	for (x = 0; src[x] && x < n; x++)
	{
		dest[len_of_dest++] = src[x];
	}
	return (dest);
}
