#include "main.h"

/**
 * array_range - funtion that creates an array of integers
 * @min: minimumm value integer
 * @max: maximum value of integer
 * Return: pointer to the array or NULL on failure
 */

int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
