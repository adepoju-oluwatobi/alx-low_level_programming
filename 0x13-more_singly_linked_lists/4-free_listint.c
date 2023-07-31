#include "lists.h"
/**
 * free_listint -  a function that frees a listint_t list.
 * @head: start of the node list
 * Return: void function
 */
void free_listint(listint_t *head)
{
	listint_t *node_ptr;

	while (head != NULL)
	{
		node_ptr = head;
		head = head->next;
		free(node_ptr);
	}
}
