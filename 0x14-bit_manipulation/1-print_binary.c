#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a num
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int shifts = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	while ((tmp >>= 1) > 0)
	{
		shifts++;
	}

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
