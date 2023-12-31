#include "lists.h"
/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: list's head
 * Return: size of the list freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *i = *h;
	size_t count = 0;

	while (i != NULL)
	{
		listint_t *j = i->next;

		free(i);
		count++;

		if (j == *h)
		{
			*h = NULL;
			break;
		}
		i = j;
	}
	return (count);
}
