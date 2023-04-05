#include "main.h"
/**
 * sqrt_a - Main Entry
 * @a: input
 * @b: input
 * Return: 0
 */
int sqrt_a(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (x * y > x)
	{
		return (-1);
	}
	return (sqrt_x(x, y + 1));
}


int _sqrt_recursion(int n)
{
	return (sqrt_x(n, 0));
}
