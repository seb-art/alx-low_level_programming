#include "main.h"

/**
  * print_number - Prints number
  * @n: integer to print
  */
void print_number(int n)
{
	unsigned int nu;

	nu = n;

	if (n < 0)
	{
		_putchar('-');
		nu = -n;
	}

	if (nu / 10)
		print_number(nu / 10);

	_putchar(nu % 10 + '0');

}
