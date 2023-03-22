#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination for the copies memory area
 * @src: source of the memory area
 * @n: unsigned integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	strncpy(dest, src, n);
	return (dest);
}
