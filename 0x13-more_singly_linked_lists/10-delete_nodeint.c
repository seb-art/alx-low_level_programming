#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list
 * @head: double pointer to the beginning of the list
 * @index: the position of the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current_node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current_node->next == NULL)
			return (-1);
		current_node = current_node->next;
	}
	next = current_node->next;
	current_node->next = next->next;
	free(next);
	return (1);
}
