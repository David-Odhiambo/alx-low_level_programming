#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concat 2 strings
 *@si: first string.
 *@s2: second string.
 *Return: pointer to string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int m = 0, n = 0, p = 0;

	if (s1 != NULL)
		for (; s1[m]; m++)
		;
	if (s1 != NULL)
		for (; s2[n]; n++)
		;

	s = malloc(sizeof(char) * (m + n + 1));
	if (s == NULL)
		return (NULL);
	
	while (p < m)
	{
		s[p] = s1[p];
		p++;
	}

	while (p < m + n)
	{
		s[p] = s2[p - m];
		p++;
	}
	s[p] = '\0';
	return (s);
}
