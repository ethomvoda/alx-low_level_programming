#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'Print alphabets'
 *
 * Return: 0 (Success)
 *
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);

		ch++;
	}

	_putchar('\n');

}
