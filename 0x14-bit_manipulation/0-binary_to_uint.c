#include "main.h"

/**
 * binary_to_unit - binary is converted to unsigned int
 * @binary: string for binary number
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *binary)
{
	int index;
	unsigned int decimal_value = 0;

	if (!binary)
		return (0);

	for (index = 0; binary[index]; index++)
	{
		if (binary[index] < '0' || binary[index] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (binary[index] - '0');
	}

	return (decimal_value);
}
