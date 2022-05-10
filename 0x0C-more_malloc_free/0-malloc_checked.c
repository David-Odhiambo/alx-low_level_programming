#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_check - allocate memory
 * return pointer to allocated memory
 * @n: memory.
 * @Return: pointer.
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (p);
}
