#include "main.h"

/**
 * _isalpha - function to check if c is a letter, uppercase of lowercase
 * @c : integer for the argument
 * Return: 0 always successful
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
