#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
