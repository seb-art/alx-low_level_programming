#include "main.h"

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: variable to the width of the 2D array
 * @height: variable to the height of the 2D array
 * Return: Pointer to the 2D array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr != NULL)
	{
		for (; i < height; i++)
		{
			arr[i] = (int *) malloc(sizeof(int) * width);
			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
