#include "main.h"

/**
 * set_bit - set bit at given index to 1.
 * @n: pointer to the bit.
 * @index: index position changes from 0
 *
 * return: 1 if it works, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
