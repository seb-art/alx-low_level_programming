#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, len = 0, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);
	j = 0;
	while (ac++)
	{
		for (i = 0; av[i]; i++)
		{
			*str = *av[i];
		}
		while (len++)
		{
			i++;
			j++;
		}
		str[j] = *av[len++];
	}
	printf("%s\n", str);
	return (0);
}
