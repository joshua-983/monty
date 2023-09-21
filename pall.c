#include "monty.h"
/**
 * f_pall - the stack to print
 * @head: head
 * @counter: number to use
 * Return:non
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h =*head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
