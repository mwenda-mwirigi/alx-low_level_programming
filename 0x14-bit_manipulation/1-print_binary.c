#include "main.h"

/**
 * print_binary - prints  binary equivalent of dec numb
 * @n: Numb print in bin
 */
void print_binary(unsigned long int n)
{
	int j, counts = 0;
	unsigned long int curr;

	for (j = 63; j >= 0; j--)
	{
		curr = n >> j;

		if (curr & 1)
		{
			_putchar('1');
			counts++;
		}
		else if (counts)
			_putchar('0');
	}
	if (!counts)
		_putchar('0');
}

