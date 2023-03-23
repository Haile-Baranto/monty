#include "monty.h"
/**
  * subtraction- The opcode sub subtracts the top element of the stack
  * from the second top element of the stack.
  * @head: stack head
  * @counter: line_number
  * Return: no return
  * Description: if stack contains less than 2 elements print
  * "L<line_number>: can't sub, stack too short" error message and
  * exit wtih EXIT_FAILURE
  * Remove first element and store result on the second element
  */
void subtraction(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int sus, length;

	temp = *head;
	for (length = 0; temp != NULL; length++)
		temp = temp->next;
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sus = temp->next->n - temp->n;
	temp->next->n = sus;
	*head = temp->next;
	free(temp);
}
