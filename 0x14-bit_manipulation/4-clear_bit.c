#include "main.h"
/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer of an unsigned long int.
 * @index: index of the bit
 *
 * Return: 1 success, -1 for failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	*n &= -(1 << index);
	return (1);
}
