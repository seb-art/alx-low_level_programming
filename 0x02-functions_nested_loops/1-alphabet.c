#include "main.h"

/**
 * print_alphabet - entrypoint of the function
 * description: printing alphabet letters
 * Return: Always 0 if successful
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
