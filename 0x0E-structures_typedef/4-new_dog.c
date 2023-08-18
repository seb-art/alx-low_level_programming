#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - creates a new dog type struct dog
  * @name: name thw dog
  * @age: age
  * @owner: owmer person's name
  *
  * Return: newly created dog type struct dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (name_len + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

/**
 * _strlen - returns the length of string
 * @s: pointer to string
 *
 * Return: the length of the string passed into f(n)
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copy string to another
 * @dest: pointer to destination string
 * @src: source string pointer
 *
 * Return: *pointer dest string
 */
char *_strcpy(char *dest, char *src)
{
	int len_str = 0, i = 0;

	while (src[len_str] != '\0')
	{
		len_str++;
	}

	for (; i < len_str; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
