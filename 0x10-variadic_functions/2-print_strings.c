#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings, followed by a new line
 * @n: the number of strings to be passed to the function
 * @separator: the string to separate the strings
 * Return: return the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (string)
		{
			printf("%s", string);
		}
		else
			{
				printf("(nil)");
			}
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
