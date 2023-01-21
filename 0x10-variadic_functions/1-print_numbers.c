#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @n: the number of integers to be printed
 * @separator: the string to separate the integer
 * Return: the numbers or NULL if the separator is not there
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list ap;

	va_start(ap, n);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
