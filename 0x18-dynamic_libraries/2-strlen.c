#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that returns the length of string
 * @s: character used for argument
 * Return: 0 (success)
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s != 0)
	{
		s++;
		x++;
	}
	return (x);
}
