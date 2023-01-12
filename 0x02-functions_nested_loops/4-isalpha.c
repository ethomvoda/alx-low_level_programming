#include "main.h"

/**
 * _isalpha - Checks if a character is lphabtic
 * @c: The  character is to be checked
 *
 * Return: 1 if character is letter, lowercase or uppercse, 0 otherwise
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
