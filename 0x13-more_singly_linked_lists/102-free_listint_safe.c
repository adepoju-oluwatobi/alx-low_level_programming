#include "lists.h"
/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: head of a list
 * Returns: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	listint_t *current;

	if (h != NULL)
	{
		current = *h;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*h = NULL;
	}
}
