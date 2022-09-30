#include "main.h"

/**
 * _isdigit - check for a digit form 0 through 9
 * @c: the variable to be checked
 *
 * Return: 1 if the variable, 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
