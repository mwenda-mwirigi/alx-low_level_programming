#include "main.h"
#include <unistd.h>

/**
 * _putchar - Fuction to writes Char c to stardard output
 * @c: character to be printed
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

