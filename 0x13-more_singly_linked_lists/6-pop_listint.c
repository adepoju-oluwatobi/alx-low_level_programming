#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: first list in node
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
	return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
