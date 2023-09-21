#include "monty.h"
/**
 * f_mul - multiplication of two top numbers
 * @head: head of stack
 * @counter: number line
 * Return: NON
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;/*Declare a pointer to a stack_t structure*/
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;/*Traverse the stack to count its length*/
		len++;/*Increment len to count the number of elements*/
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;/*Update the second element with the result*/
	h->next->n = aux;/*Update the second element with the result*/
	*head = h->next; /*Move the *head pointer to the next element*/
	free(h);/*Free memory of the old top element*/
}
