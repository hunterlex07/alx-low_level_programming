#include "main.h"

/**
 * _isupper - checks for uppercase characters.
 * @c: the charcter to be checked
 *
 * Return: 1 if character is uppercase, 0 if otherwise.
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
