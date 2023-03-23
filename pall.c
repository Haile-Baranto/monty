#include "monty.h"
/**
 * pall - The opcode pall prints all the values
 * on the stack, starting from the top of the stack.
 * @head: pointer to the top of the stack
 * @counter: line number
 * Return: Nothing
 * Description: If the stack is empty, don’t print anything
 * and usage: pall
*/
void pall(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
