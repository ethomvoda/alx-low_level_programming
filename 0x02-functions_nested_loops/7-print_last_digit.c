#include "main.h"

/**
 * print_last_digit - name says it all
 * @n: value ot be accepted
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');

	return (digit);
}
