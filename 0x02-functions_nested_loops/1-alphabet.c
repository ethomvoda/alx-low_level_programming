#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'Print alphabets'
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);

		ch++;
	}

	_putchar('\n');

	return (0);
}
