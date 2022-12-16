#include "main.h"

/**
 * print_numbers -prints numbers from 0 - 9
 * Description: you can only use putchar twice
 */

void print_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		_putchar(j);
	}
	_putchar("\n");
}
