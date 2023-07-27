#include "lists.h"
/**
 * print_list - function that prints all the elements.
 * @h: linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h !- NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			/* print lenght of list and value */
			printf("[%d] %s\n", h->len, h->str);

		/* allocate the add next address to h */
		h = h->next;
		i++;
	}
	return (i);
}
