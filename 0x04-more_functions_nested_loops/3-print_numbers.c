#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * Description: You can only use _putchar twice
 */
void print_numbers(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
