#include "main.h"

/**
 * get_bit - Function will return value of a bit at a given index in a dec num
 *
 * @n: numb to be searched
 * @index: index of that bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

