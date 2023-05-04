#include "main.h"

/**
 * set_bit - set value for bit at given index to 1 which is posative.
 * @n: bit pointer.
 * @index: Index to set value at - indices start from 0.
 *
 * Return: -1 if error occurs/happens.
 *         Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
