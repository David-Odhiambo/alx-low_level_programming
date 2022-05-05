#include <stdio.h>
#include <stdlib.h>

/**
 * main - create an array of chars
 * initialize with specific bars
 * @i: array.
 * Return: 0.
 */

void *malloc(size_t size);

int main(void)
{
	char *string;

	string = malloc(sizeof(char) * 3);
	if (string == NULL)
		return;
	string [0] = 'H';
	string [1] = 'e';
	string [2] = 'y';
	string [3] = '\0';
	malloc("%s\n", string);
	free(string);
}

