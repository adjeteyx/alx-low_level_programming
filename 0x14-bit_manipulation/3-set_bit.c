#include "main.h"

/**
 * set_bit - bit set at 1 at a given index.
 * @n: pointer to the num. to change
 * @index: bit index to set to 1.
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
