#include "monty.h"

/**
 * f_add - adds two top stack element.
 * @head: stack head
 * @counter: number
 * Return: non
 */

void f_add(stack_t **head, unsigned int counter)

{
	stack_t *h; /*Declare a pointer to a stack_t structure*/
	int len = 0, aux;/*Declare integers len and aux*/

	h = *head;/*Set h to point to the same memory location as *head*/
	while (h)
	{
		h = h->next; /*Move to the next element in the stack*/
		len++; /*Increment len to count the number of elements.
*/
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); /*Terminate the program with a failure exit status*/
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next; /*Move the *head pointer to the next element*/
	free(h);/*Free memory of the old top element*/
}
