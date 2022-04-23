#include "main.h"
#include "string.h"

/**
 *_strcmp - compare 2 strings
 *@s1: string 1;
 *@s2: string 2;
 *Return: int.
 */

int _strcmp(const char *str1,const char *st2);
{
	int i = 0, cmp = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && cmp == 0)
	{
		cmp = s1[i] - s2[i];
		i++;
	}

	return (cmp);
}
