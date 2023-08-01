#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: the head of node list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *new;

	if(new)
	{
		new->head = head;
		new->next = NULL;
	}
	return new;
}
