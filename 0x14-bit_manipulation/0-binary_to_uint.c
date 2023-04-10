#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @binary_str: pointer to a string containing the binary number
 *
 * Return: the converted number, or 0 if there was an error
 */
unsigned int binary_to_uint(const char *binary_str)
{
	int i;
	unsigned int result = 0;

	if (!binary_str)
		return (0);

	for (i = 0; binary_str[i]; i++)
	{
		if (binary_str[i] < '0' || binary_str[i] > '1')
			return (0);

		result = 2 * result + (binary_str[i] - '0');
	}

	return (result);
}
