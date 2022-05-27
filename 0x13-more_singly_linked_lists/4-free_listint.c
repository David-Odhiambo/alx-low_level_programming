#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: linked list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	else
		(head != NULL);
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
