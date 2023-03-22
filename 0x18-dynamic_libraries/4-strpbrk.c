#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: string to scan
 * @accept: string that contains characters to be matched with string s
 * Return: pointer to the string s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				break;
		}
		if (*(s + i) == *(accept + j))
			return (s + i);
	}
	return (0);
}
