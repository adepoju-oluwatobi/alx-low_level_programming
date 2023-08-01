#include "list.h"
/**
 * struct new_node- singly linked list
 * @p: ptr to nodes
 * @next: points to next node
 */
typedef struct node
{
	void *p;
	struct node *next;
} new_node;
