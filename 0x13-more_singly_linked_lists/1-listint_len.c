#include "lists.h"
/**
 * listint_len - a function that prints all the elements
 * @h: content of node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *new_node = h;
	size_t num_of_element = 0;

	while (new_node != NULL)
	{
		num_of_element += 1;
		new_node = new_node->next;
	}
	return (num_of_element);
}
