#include "main.h"
/**
 * _islower - prints if the letter is lowercase
 * @c: int for argument
 * Return: 0 when successful
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
