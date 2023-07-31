#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the beginning of a listint_t list.
 * @head: head of node
 * @n: integer data
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node = malloc(sizeof(listint_t));

	if (end_node != NULL)
	{
		end_node->n = n;
		end_node->next = *head;
	}
	else
	{
		return (NULL);
	}
}
