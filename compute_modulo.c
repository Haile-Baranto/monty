#include "monty.h"
/**
 * compute_mod - computes the modulo of second top to top element of the stack
 * and store the result on the second element and delete the top element
 * @head: pointer to the first element of the stack
 * @counter: line_number
 * Return: None
 * Description: if length of the stack < 2 prints
 *  L<line_number>: can't mod, stack too short followed new line
 * and exit with status EXIT_FAILURE.
 * top element is 0 print  L<line_number>: division by zero\n
*/
void compute_mod(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int length = 0, result;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)/*First element zero*/
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = (temp->next->n) % (temp->n);
	temp->next->n = result;
	*head = temp->next;
	free(temp);
}
