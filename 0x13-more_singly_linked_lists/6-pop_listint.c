#include "lists.h"

/**
 * pop_listint - a function that deletes the head
 * node of a listint_t linked list
 * @head: start of the nodes
 * Return: the head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *first_node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	first_node = *head;
	*head = first_node->next;
	n = first_node->n;
	free(first_node);
	return (n);
}
