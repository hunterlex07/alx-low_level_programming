#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to the forst string
 * @s2: pointer to the second string
 *
 * Return: difference between the two strings.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
