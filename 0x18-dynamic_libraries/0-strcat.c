#include "main.h"
/**
 * _strcat - function that concatenated two strings
 * @dest: the destination of a the appended string
 * @src: the source string to append
 * Return: 0 always
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int len_dest = 0;

	while (dest[x++])
		len_dest++;
	for (x = 0; src[x]; x++)
	{
		dest[len_dest++] = src[x];
	}
	return (dest);
}
