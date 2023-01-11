#include "main.h"

/**
 * str_concat - a function that concatenates two string
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: pointer to the new memory if success, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int j = 0;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s3 = malloc(sizeof(char) * ((strlen(s1) + strlen(s2)) + 1));

	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	s3[j] = '\0';
	return (s3);
}
