#include "monty.h"
/**
  *f_rotl- rotates the stack
  *@head: stack head
  *@counter: number
  *Return: NON number
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)/*Check if the stack is empty or contains only one element*/
	{
		return; /*If so, there's nothing to rotate, so return without doing anything*/
	}
	aux = (*head)->next;/*Store the second element in the 'aux' variable*/
	aux->prev = NULL;
	while (tmp->next != NULL)/*Traverse the stack to find the last element*/
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;/*Update the head to the new second element*/
	(*head) = aux;
}
