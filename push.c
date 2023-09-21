#include "monty.h"
/**
 * f_push - add node
 * @head: head
 * @counter: number
 * Return: NON to return
*/
void f_push(stack_t **head, unsigned int counter)
{
	int n, abc = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			abc++;
		for (; bus.arg[abc] != '\0'; abc++)
		{
			if (bus.arg[abc] > 57 || bus.arg[abc] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
