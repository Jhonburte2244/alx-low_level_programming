#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int x, res1 = 0, res2 = 0;

	for (x = 0; x < size; x++)
	{
		res1 += a[x];
		res2 += a[size - x - 1];
		a += size;
	}
	printf("%d, ", res1);
	printf("%d\n", res2);
}
