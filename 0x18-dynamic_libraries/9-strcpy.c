#include "main.h"

/**
* _strcpy - a function that copies the string pointed
* @dest: destination
* @src: source
*
* Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x) != '\0')
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';


	return (dest);
}
