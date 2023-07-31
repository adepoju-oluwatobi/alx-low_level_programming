#include "lists.h"
/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: first list in node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node_ptr;

	if (head == NULL)
	return;

	while (*head)
	{
		node_head = *head;
		*head = (*head)->next;
		free(new_ptr);
	}
	head = NULL;
}
