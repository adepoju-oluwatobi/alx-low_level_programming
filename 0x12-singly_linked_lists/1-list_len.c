#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: singly linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t number_of_node = 0;

	while (h != NULL)
	{
		h = h->next;
		num_of_node++;
	}
	return (num_of_node);
}
