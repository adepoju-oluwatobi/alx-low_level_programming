#include "lists.h"
/**
 * add_nodeint - a function that adds a new node
 * @head: head of node
 * @n: integer data
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *begin_node;

	begin_node = malloc(sizeof(listint_t));
	if (begin_node != NULL)
	{
		begin_node->n = n;
		begin_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		begin_node->next = *head;
	*head = begin_node;
	return (begin_node);
}
