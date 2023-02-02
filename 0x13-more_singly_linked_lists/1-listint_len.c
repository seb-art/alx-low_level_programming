#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list
 * @h: first element of the linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		element++;
		h->next;
	}
	return (element);
}
