#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: string
 * @s2: string
 * Return: negative int if s1 < s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int difference = 0;

	while (1)
	{
		if (s1[x] == '\0' && s2[x] == '\0')
			break;
		else if (s1[x] == '\0')
		{
			difference = s2[x];
			break;
		}
		else if (s2[x] == '\0')
		{
			difference = s1[x];
			break;
		}
		else if (s1[x] != s2[x])
		{
			difference = s1[x] - s2[x];
			break;
		}
		else
			x++;
	}
	return (difference);

}
