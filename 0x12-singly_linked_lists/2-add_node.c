#include "lists.h"
/**
 * add_node - function that add a new node
 * @str: string to be duplicated
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	for (i; str[i]; i++)
		new_node->len = i;
		new_node->next = *head;
		*head = new_node;

	return (*head);
}
