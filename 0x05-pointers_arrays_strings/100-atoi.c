#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the interger value of the string after conversion
 */
int _atoi(char *s)
{
	int index = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			index *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
