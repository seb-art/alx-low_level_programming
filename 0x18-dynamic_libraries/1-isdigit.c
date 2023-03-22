#include "main.h"

/**
 * _isdigit - function to check if an integer is a digit 0-9
 * @c: character tested if is 0-9
 * Return: 1 if it is, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
