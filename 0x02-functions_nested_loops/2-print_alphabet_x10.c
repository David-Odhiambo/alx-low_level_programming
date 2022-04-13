<<<<<<< HEAD
#include "main.h
A
A
A
A
A
A
"
=======
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int alphabet;
int count;

count = 0;
while (count < 10)
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

count++;
_putchar('\n');
}

}

>>>>>>> 29abc3f21d41324eea0a3b96abb3ecfa8e3b3157
