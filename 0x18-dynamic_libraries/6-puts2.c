#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - function that prints each character in it's line
 * @str: Variable declared
 * Return: 0 (success)
 */

void puts2(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		if (x % 2 == 0)
			putchar(*(str + x));
		x++;
	}
	putchar(10);
}
