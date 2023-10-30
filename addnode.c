#include "monty.h"

/**
 * add_item - add item
 * @head: head
 * @n: n
*/
void add_item(stack_t **head, int n)
{

	stack_t *new, *node;

	node = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{ printf("Error\n");
		exit(0); }
	if (node)
		node->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
