#include "monty.h"

/**
* free_stack - free stack
* @head: head
*/

void free_stack(stack_t *head)
{
	stack_t *new;

	new = head;
	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
