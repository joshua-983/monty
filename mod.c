#include "monty.h"
/**
 * f_mod - division of the second
 * top element of the stack
 * @head: head
 * @counter: line
 * Return: NON
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h; /* Declare a pointer to a stack_t structure*/
	int len = 0, aux; /*Declare integers len and aux*/

	h = *head; /*Set h to point to the same memory location as *head*/
	while (h)
	{
		h = h->next; /*Traverse the stack to count its length*/
		len++; /*Increment len to count the number of elements*/
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);/*Terminate the program with a failure exit status*/
	}
	aux = h->next->n % h->n;/*Calculate the result of the mod operation and store it in aux*/
	h->next->n = aux; /*Update the second element with the result*/
	*head = h->next; /*Move the *head pointer to the next element*/
	free(h);/*Free memory of the old top element*/
}
