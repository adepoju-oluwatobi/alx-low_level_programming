#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: first list in node
 * @index: index of node
 * Return:  the nth node of a node or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t x;

	for (x = 0; (x < index) && (head->next); x++)
	head = head->next;

	if (x < index)
	return (NULL);

	return (head);
}
