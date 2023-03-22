#include "main.h"

/**
 * _isupper - function to check if the letter is UPPER
 * main - check the code.
 *@c: interger passed for argument if it is upper
 * Return: 1 when it's true for the function.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
