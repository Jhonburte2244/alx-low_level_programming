#include "main.h"

/**
 * print_line - draw a straight line
 * @x: number of times line is printed
 * Description: Can only use _putchar to print
 */
void print_line(int x)
{
	int y = 0;
	while (y < x)
	{
		_putchar('_');

		y++;
	}
	_putchar('\n');
}
