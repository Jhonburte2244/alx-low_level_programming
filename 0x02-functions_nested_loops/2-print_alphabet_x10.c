#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int latter;
	int count;

	count = 0;

	while (count < 10)
	{
		for (latter = 'a'; latter <= 'z'; latter++)
		{
			_putchar(latter);
		}
		count++;
		_putchar('\n');
	}
}
