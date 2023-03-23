#include "main.h"

/**
 * print_diagonal - print backslash diagonally
 * @x: int type
 *
 * Return: prints lines and space to the value of n
 */

void print_diagonal(int x)
{
	int a, b;

	for (a = 1; a <= x; a++)
	{
		for (b = 2; b <= a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (x < 1)
		_putchar('\n');
}
