#include "monty.h"
/**
 * f_swap - adds the top two elements
 * @head: stack head
 * @counter: number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;/*Reset h to point to the top of the stack*/
	aux = h->n; /*Store the value of the top element in aux*/
	h->n = h->next->n; /*Swap the value of the top element with the value of the second element*/
	h->next->n = aux;/*Set the value of the second element to the value stored in aux*/
}
