#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: string to check
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0)
		return (1);
	return (is_palindrome(s - 1));
}

/**
 * pal - function to check if string is palindrome or not
 * @s: string
 * @a: first character of the string
 * @z: last character of the string
 * Return: 1 if palindrome and 0 if not
 */

int pal(char *s, int a, int z)
{
	if (a == z)
		return (1);
	if (s[a] != s[z])
		return (0);
	if (a < z + 1)
		return (pal(s, a + 1, z - 1));
	return (0);
}
