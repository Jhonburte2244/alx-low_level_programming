#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int number;
        int mult;
       int res;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			res = number * mult;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');

			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
