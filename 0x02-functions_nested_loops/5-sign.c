#include "main.h"
/**
 * print_sign - function to print sign of positive or negative if n is - or -
 * @n: interger for argument if it is positive or negative
 * Return: 0 always success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
		_putchar ('0');
	return (0);
}
