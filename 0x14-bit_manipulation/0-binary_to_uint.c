#include "main.h"

/**
 * binary_to_uint: a function that convert binary number to an
 * unsigned intiger numbers.
 * @b: Binary number.
 *
 * Return Values: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int xi;
	int leng, base_two;

	if (!b)
		return (0);

	xi = 0;

	for (leng = 0; b[leng] != '\0'; leng++)
		;

	for (leng--, base_two = 1; leng >= 0; leng--, base_two *= 2)
	{
		if (b[leng] != '0' && b[leng] != '1')
		{
			return (0);
		}

		if (b[leng] & 1)
		{
			xi += base_two;
		}
	}

	return (xi);
}
