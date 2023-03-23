#include "monty.h"
/**
 * delete_1st_element - remove the top element of the stack
 * @head: pointer to the first element of the stack
 * @counter: line number where opcode found on the file
 * Return: None
 * Description: If the stack is empty, print the error message
 * "L<line_number>: can't pop an empty stack",
 * followed by a new line, and exit with the status EXIT_FAILURE
*/
void delete_1st_element(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	temp = *head;
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	*head = temp->next;
	free(temp);
}
