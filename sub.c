#include "monty.h"
/**
  *f_sub- sustration
  *@head: pointer to stack head
  *@counter: number unused parameter
  *Return:NON to Return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;/*Declare a pointer to a stack_t structure.
 */
	int sus, nodes;/*Declare integers 'sus' and 'nodes' to hold subtraction result and count of stack elements.
*/

	aux = *head;/*Set 'aux' to point to the same memory location as '*head'.
        */
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);/*Free memory of the old top element.*/
}
