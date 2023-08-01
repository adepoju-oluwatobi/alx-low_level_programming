#include "lists.h"
/**
 * size_t print_listint_safe -  a function that prints a listint_t
 * @head: head of linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *i = head;
	const listint_t *j = head;
	size_t count = 0;

	while (i != NULL && j != NULL && j->next != NULL)
	{
		i = i->next;
		j = j->next->next;

		if (i == j)
			exit(98);

		printf("%d", i->n);
		if (i->next != NULL)
			printf("->");
		else
			printf("-> NULL\n");

		count++;
	}
	return count;
}
