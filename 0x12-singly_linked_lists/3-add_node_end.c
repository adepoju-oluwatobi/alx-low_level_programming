#include "list.h"
/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: head of node
 * @str: string data in node
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str);
{
	list_t *my_node, *current_node;
	size_t i;

	my_node = malloc(sizeof(list_t));
	if (my_node == NULL)
		return (NULL);

	my_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	my_node->len = i;
	my_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = my_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = my_node;
	}

	return (*head);
}
