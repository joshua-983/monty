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

	h = *head;
	if (h == NULL)/*Check if the stack is empty (head is NULL).
*/
		return;
	while (h)
	{
		printf("%d\n", h->n);/*Print the value of the current element.*/
		h = h->next;/*Move to the next element in the stack*/
	}
}
