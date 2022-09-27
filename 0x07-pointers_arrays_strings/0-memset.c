#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: a pointer to the memory area to be filled.
 * @b: the character that fills the memory area.
 * @n: the number memory byted to be filled.
 *
 * Return: a pointer to the filled memory area, @s.
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
