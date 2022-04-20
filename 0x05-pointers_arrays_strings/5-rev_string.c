#include "main.h"
/**
 * rev_string - reverse a string
 *@s: string to reverse
 *Return: Nothing
 */
void rev_string(char *s)
{
	int len, i;
	char 1;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	len--:
	for (i = 0; i < len; i++)
	{
		1 = *(s + len; i++)
		*(s + len) = *(s + i);
		*(s + i) = 1;
		len--;
	}
}
