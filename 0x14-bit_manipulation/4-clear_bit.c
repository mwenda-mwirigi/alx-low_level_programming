#include "main.h"

/**
 * clear_bit - Set value of a given bit to 0
 * @b: pointer to the number to change
 * @ind: index bit to clear
 *
 * Return: 1 for success, -1 otherwise
 */
int clear_bit(unsigned long int *b, unsigned int ind)
{
	if (ind > 63)
		return (-1);

	*b = (~(1UL << ind) & *b);
	return (1);
}

