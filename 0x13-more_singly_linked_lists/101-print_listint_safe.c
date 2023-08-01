#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_list(new_node **head)
{
	new_node *temp;
	new_node *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
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
		new = malloc(sizeof(new_node));

		if (new == NULL)
			exit(98);

		new->n = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next !- NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-[%p]%d\n", (void *)head, head->n;
				free_list(&ptr);
				return (count);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	free_list(&ptr);
	return (count);
}
