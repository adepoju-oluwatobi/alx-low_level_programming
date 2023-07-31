#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: integer to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
