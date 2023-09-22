#include "monty.h"
/**
 * f_pchar - prints the char 
 * followed by a new line
 * @head: stack head
 * @counter: number
 * Return: NON
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;/*Declare a pointer to a stack_t structure.
*/

	h = *head;/*Set h to point to the same memory location as *head.

*/
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);/*Close a file named bus.file*/
		free(bus.content);/*Free memory allocated for bus.content*/
		free_stack(*head);/*Call a function to free memory associated with the stack.
*/
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
