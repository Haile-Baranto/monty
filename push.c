#include "monty.h"
/**
 * push - add node at the top of the stack
 * @head: pointer to the first node of the stack
 * @counter: line_number at which the opcade exixts
 * Return: Nothing
 * Description: if push does not have an arguement or the
 * arguement is not int, print the error message "L<line_number>:
 * usage: push integer", followed by a new line,
 * and exit with the status EXIT_FAILURE
*/
void push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
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
		add_node_front(head, n);
	else
		addqueue(head, n);
}
