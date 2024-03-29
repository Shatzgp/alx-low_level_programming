#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @num: number to print in binary
 */
void print_binary(unsigned long int num)
{
	int i, count = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = num >> i;

		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
