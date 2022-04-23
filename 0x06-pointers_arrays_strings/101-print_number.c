#include "main.h"

/**
 *print_number - print a number using _putchar.
 *@n: the number to be printed.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('_');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');

	if (n/10)
		_printnumber(n/10);

	_putchar(n%10 + '0');
	
	}
}

