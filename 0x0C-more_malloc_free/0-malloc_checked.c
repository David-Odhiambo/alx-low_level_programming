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
	int* ptr;
	int n, i;

	printf("Enter number of elements:");
	scanf("%d" , &n);
	printf("Entered number of elements: %d\n" , n);

	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {
		printf("Memory successfully allocated using malloc.\n");

		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}

		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
	}

	return (pointer);
}
