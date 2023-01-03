#include "main.h"

/*
 * main - Entry point
 *
 * Description: 'Print alphabets 10times'
 *
 * Return: 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	unsigned int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
