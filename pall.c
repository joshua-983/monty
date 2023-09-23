#include "monty.h"

/**
 * f_pall - prints stack
 * @head: stack head
 * @counter: No. to use
 * Return: NON TO RETURN
 */

void f_pall(stack_t **head, unsigned int counter)

{
	stack_t *h;
	(void)countter; /*unused variable*/

	h = *head; /*initialize a temporary pointer*/
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n); /*print the value of the current node*/
		h = h->next;
	}
}
