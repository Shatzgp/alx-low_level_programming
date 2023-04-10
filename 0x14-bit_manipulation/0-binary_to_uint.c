#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary num to an unsigned int
 * @b: char string
 *
 * return: the converted number
 * description: converted decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int len;

	if (b == NULL)
		return (0);
	len = 0;
	while (b[len] != '\0')
	{
		if  (b[len] != '0' && b[len] != '1')
		{
		return (0);
		}
		len++;
	}
	{
		total += power;
		return (total);
	}
}
