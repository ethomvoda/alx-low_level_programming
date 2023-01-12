#include "main.h"

/**
 * _islower - Checks if the character is lowercase
 *
 * @c: The character to be checked
 *
 * Return: 1 if characer is lower, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
