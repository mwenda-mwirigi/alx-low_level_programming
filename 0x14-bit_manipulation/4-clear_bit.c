#include "main.h"

/**
 * clear_bit - Fuction that Sets the value of a bit to 0
 * @n: points to the nuMb to change
 * @index: Index of Bit to clear
 *
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

