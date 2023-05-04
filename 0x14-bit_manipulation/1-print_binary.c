#include "main.h"

/**
 * print_binary - Prints binary values of given number.
 * @n: print the number in binary format .
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
