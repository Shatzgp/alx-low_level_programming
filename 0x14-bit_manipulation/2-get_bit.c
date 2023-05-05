#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number to find
 * @index: index of a bit
 *
 * Return: if error occures -1 otherwise the value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
		if (index > 63)
			return (-1);
		bit_value = (n >> index) & 1;

		return (bit_value);
}
