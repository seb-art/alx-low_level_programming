#include "main.h"
/**
 * print_last_digit - prints the last digit in a number
 * last_digit - last digit
 * @z: the number to be checked
 * Return: 0 always success
 */

int print_last_digit(int z)
{
	int last_digit = z % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar (last_digit + '0');
	return (last_digit);
}
