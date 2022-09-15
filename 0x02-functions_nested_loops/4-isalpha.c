#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the character that is checked
 *
 * Return: 1 for alphabets, if not return 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') ||
			(c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
