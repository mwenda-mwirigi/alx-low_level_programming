#include "main.h"

/**
 * ret_bit - Returns value of bit at an index in a decimal num
 * @b: number to be searched
 * @ind: Index of bit
 *
 * Return: value of bit
 */
int ret_bit(unsigned long int b, unsigned int ind)
{
	int bit_value;

	if (ind > 63)
		return (-1);

	bit_value = (b >> ind) & 1;

	return (bit_value);
}

