include "main.h"

/**
 * _memset - funtion that fills memory with a consant byte
 * @s: string
 * @b: constant byte
 * @n: the first number of bytes of memory
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
