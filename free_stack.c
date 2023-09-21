#include "monty.h"

/**
 * free_stack - double linked list to be freed
 * @head: the head of stack
 */
void free_stack(stack_t *head)
{
	stack_t *aux;
	aux = head;
	while (head)
	{
		aux = head->next;
		free (head);
		head = aux;
	}
}
