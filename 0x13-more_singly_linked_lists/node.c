/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

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
