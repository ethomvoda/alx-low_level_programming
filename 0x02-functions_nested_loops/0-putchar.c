#include "main.h"

/**
 * main - Entry point
 * 
 * Description: 'Prints out putchar'
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char x[8] = {'_','p','u','t','c','h','a','r'};
	unsigned int i;

	for(i=0; i < sizeof(x); i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');

	return (0);
}
