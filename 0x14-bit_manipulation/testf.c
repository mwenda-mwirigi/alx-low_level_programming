#include "main.h"

/**
 * binary_to_uint - converts binary numb to unsigned int
 * @b: string contains the binary numb
 *
 * Return: the converted numb, or 0 if there is an invalid character
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int con_val = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		con_val = 2 * con_val + (b[i] - '0');
	}
	return (con_val);
}

