#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @binary_str: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	if (binary_str == NULL)
	return 0;
    }

	unsigned int result = 0;
	for (int i = 0; binary_str[i] != '\0'; i++) {
	char current_char = binary_str[i];

	if (current_char < '0' || current_char > '1') {
		return 0;
	}

	int bit_value = current_char - '0';
	result = result * 2 + bit_value;
	}

	return (result);
}

