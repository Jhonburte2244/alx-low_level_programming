#include "main.h"

/**
 * get_bit: gets value of bit for the given index.
 * @n: Bit values .
 * @index: Index to get a value at : shows start at 0.
 *
 * Return: -1 if error occurs/happens.
 *         else : value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
