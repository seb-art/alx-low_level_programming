#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/*function that searches for a value in an array using the linear search algorithm*/
int linear_search(int *array, size_t size, int value);
/*function that searches for a value in a sorted array of integers using the binary search algorithm*/
int binary_search(int *array, size_t size, int value);
/*function that searches for a value in a sorted array of integers using the Jump search algorithm*/
int jump_search(int *array, size_t size, int value);
/*function that searches for a value in a sorted array of integers using the Interpolation search algorithm*/
int interpolation_search(int *array, size_t size, int value);
/*function that searches for a value in a sorted array of integers using the Exponential search algorithm*/
int exponential_search(int *array, size_t size, int value);
/*function that searches for a value in a sorted array of integers*/
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
#endif /* SEARCH_ALGOS_H */
