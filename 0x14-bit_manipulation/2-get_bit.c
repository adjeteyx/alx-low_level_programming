/**
 * get_bit - returns value of bit in a decimal number at an index
 * @n: search number
 * @index: bit index
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
