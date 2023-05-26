#include "main.h"

/**
 * print_bin - prints  binary equivalent of dec numb
 * @b: Numb print in bin
 */
void print_bin(unsigned long int b)
{
	int f, count = 0;
	unsigned long int current;

	for (f = 63; f >= 0; f--)
	{
		current = b >> f;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

