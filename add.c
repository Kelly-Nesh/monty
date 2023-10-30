#include "monty.h"

/**
 * func_add_item - func add item
 * @head: head
 * @ln: line_number
 * Return: void
*/

void func_add_item(stack_t **head, unsigned int ln)
{
	stack_t *topstack;
	int len = 0, node;

	topstack = *head;
	while (topstack)
	{
		topstack = topstack->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", ln);
		fclose(bus.file);
		free(bus.ln);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	topstack = *head;
	node = topstack->n + topstack->next->n;
	topstack->next->n = node;
	*head = topstack->next;
	free(topstack);
}
