#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: first list in node
 * @index: index of node
 * Return:  the nth node of a node or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
	head = head->next;

	if (n < index)
	return (NULL);

	return (head);
}
