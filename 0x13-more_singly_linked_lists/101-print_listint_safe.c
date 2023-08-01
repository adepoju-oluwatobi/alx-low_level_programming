#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: the head of node list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			exit(98);

		new->n = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next !- NULL)
		{
			add = add->next;
			if (head == add->n)
			{
				printf("-[%p]%d\n", (void *)head, head->n;
				free(count);
			}
		}
		free(ptr);
		return(count);
}
