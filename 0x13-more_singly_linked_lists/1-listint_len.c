#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list
 * @h: first element of the linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL; count++, c = c->next)
		;

	return (count);
}
