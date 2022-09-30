#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character that is checked
 *
 * Return: 1 for lowercase character, if not return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
