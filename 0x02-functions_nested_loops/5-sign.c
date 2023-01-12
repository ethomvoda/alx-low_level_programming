#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the input we need
 *
 * Return: 1,0 or -1 based on the range of number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
