#include "main.h"

/**
 * print_numbers -prints numbers from 0 - 9
 * Description: you can only use putchar twice
 */

void print_numbers(void)
{
	int j;

	j = 0;
	while (j <10)
	{
		_putchar(j);
		j++
	}
	_putchar("\n");
}
