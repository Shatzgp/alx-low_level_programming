#include "main.h"

/**
 * flip_bits - counts the number of bits needed
 * to get from one to the other number
 * @n: the number.
 * @m: the second number.
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	for (i = 63; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}

	return (i);
}
