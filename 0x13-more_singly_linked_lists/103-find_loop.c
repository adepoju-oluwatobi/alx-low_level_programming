#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: head of linked list
 * Return: The address of the node where the loop starts, or NULL if there
 * is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i = head;
        listint_t *j = head;

	if (head == NULL || head->next == NULL)
	return (NULL);

	while (j != NULL && j->next != NULL)
	{
		i = i->next;
		j = j->next->next;

		if (i == j)
		{
			j = head;
			while (i != j)
			{
				i = i->next;
				j = j->next;
			}
			return (j);
		}
	}
	return (NULL);
}
