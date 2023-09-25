#include "monty.h"
/**
 * f_pstr - prints the string
 * @head: stack head
 * @counter: line_number
 * Return: NON
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)/*If the value is outside the valid ASCII range, exit the loop*/
		{
			break;
		}
		printf("%c", h->n);/**Print the character corresponding to the stack's element value*/

		h = h->next;/*Move to the next element in the stack*/
	}
	printf("\n");/*Print a newline character to end the string*/
}
