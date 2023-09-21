#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: NON
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int az = 0; /*Declare an unsigned integer variable az.
*/
	char *op;/*Declare a character pointer op*/

	op = strtok(content, " \n\t"); /*Tokenize the input content string using space, newline, and tab characters as delimiters, and set op to the first token*/
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[az].opcode && op)
	{
		if (strcmp(op, opst[az].opcode) == 0)
		{	opst[az].f(stack, counter);
			return (0);
		}
		az++; /*Move to the next opcode in the opst array*/
	}
	if (op && opst[az].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);/*You might want to change this return value as needed*/
}
