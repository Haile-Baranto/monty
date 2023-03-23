#include "monty.h"
/**
* free_stack - frees space assigned by malloc
* @head: pointer to the head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
