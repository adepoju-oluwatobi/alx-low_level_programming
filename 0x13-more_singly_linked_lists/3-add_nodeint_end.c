#include "lists.h"
/**
 * add_nodeint_end - a function that adds a node at the end
 * @head: head of node
 * @n: integer
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (end_node != NULL)
	{
		end_node->n = n;
		end_node->next = NULL;
	}
	else
		return (NULL);
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = end_node;
	}
	else
		*head = end_node;
	return (end_node);
}
