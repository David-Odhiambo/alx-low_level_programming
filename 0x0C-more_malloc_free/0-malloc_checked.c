#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_check - allocate memory.
 *@b: size of the memory to be allocated.
 *Return: pointer;
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
