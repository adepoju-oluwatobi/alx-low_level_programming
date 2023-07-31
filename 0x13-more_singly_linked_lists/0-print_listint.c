#include "lists.h"
/**
 * print_listint - a function that prints all the element
 * @h: content of node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *element_holder = h;
	size_t num_of_element = 0;

	while (element_holder != NULL)
	{
		printf("%d\n", element_holder->n);
		num_of_element += 1;
		element_holder = element_holder->next;
	}
	return (num_of_element);
}
