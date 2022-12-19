#include <stdio.h>

#include <stdlib.h>

/**
 * main - Entry point
 *
 * Descripiton: 'Halla'
 *
 * Return: 0 (Success)
 */

int main(void)

{

		char c = 'a';



		while (c <= 'z')

		{

		if (c != 'q' && c != 'e')

		putchar(c);

		c++;

		}

		putchar('\n');

		return (0);

}
