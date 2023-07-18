#include "main.h"

/**
 * binary_to_uint - A function convert bin number to unsigned intger
 * @b: string that contains the bin number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int deci_val = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		deci_val = 2 * deci_val + (b[k] - '0');
	}

	return (deci_val);
}

