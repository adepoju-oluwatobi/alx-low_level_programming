#include "lists.h"
/**
 *
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
