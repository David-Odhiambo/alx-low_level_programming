#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenate 2 strings.
 * @s1: first string
 * @s2: second string
 * @n: allocated memory
 * @Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1, s2, s3, i = 0;
	char *n;

	s1 = strlen(str1);
	s2 = strlen(str2);
	s3 = s1 + s2 +1;

	n = char *malloc(size_t s3);

	for(i = 0; i < s1; i++)
	{
		a[i] = str1[i];
		
		for(i = 0; i < s2; i++)
	{
		n[i + s1] = str2[i];

	n[i]='\0';

	return n;
	}

	int main(void)
	{
		printf("%s\n",my_strcat("Hello","World!"));
		return 0;
	}
	}
}
