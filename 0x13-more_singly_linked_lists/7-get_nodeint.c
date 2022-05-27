#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_t linked list
 * @head: pointer to head pointer of linked list
 * @index: nth node
 * Return: nth node, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int j = 0;

	if (head == NULL)
		return (NULL);

	while ((j < index) && head != NULL)
	{
		head = head->next;
		j++;
	}

	if (j == index)
		return (head);

	return (NULL);
}
