#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: first list in node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head);
{
	typedef listint_t node;
	node *container_one;
	node *container_two;

	container_one = NULL;
	container_two = NULL;

	while (*head != NULL)
	{
		container_two = (*head)->next;
		(*head)->next = container_one;
		container_one = *head;
		*head = container_two;
	}
	*head = container_one;
	return (*head);
}
