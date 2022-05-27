#include "lists.h"

int _strlen_recursion(char *s);

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	while (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen_recursion(new->str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @m: string.
 * Return: length of @m.
 */
int _strlen_recursion(char *m)
{
	if (*m == 0)
		return (0);
	else
		return (1 + _strlen_recursion(m + 1));
}
