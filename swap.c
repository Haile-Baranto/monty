#include "monty.h"
/**
 * swap - The opcode swap swaps the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 * Description: usage: swap and If the stack contains less than two
 * elements, print the error message L<line_number>: can't swap,
 * stack too short, followed by a new line,
 * and exit with the status EXIT_FAILURE
*/
void swap(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int length = 0, value;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	value = temp->n;
	temp->n = temp->next->n;
	temp->next->n = value;
}
