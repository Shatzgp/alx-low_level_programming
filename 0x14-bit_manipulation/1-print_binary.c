#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number.
 * @n: The number to be printed in binary.
 * Return: No return.
 */
void print_binary(unsigned long int n)
{
	/* Binary Representation */
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int bit;

	while (mask > 0)
	{
		bit = (n & mask) ? 1 : 0;
		putchar(bit + '0');
	mask >>= 1;
	}
}
