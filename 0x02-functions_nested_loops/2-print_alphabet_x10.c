#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Return 0 always success
 */

void print_alphabet_x10(void)
{
	char x, i;

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
