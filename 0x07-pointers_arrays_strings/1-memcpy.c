#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: a pointer to the destination memory area.
 * @src: the memory area to be copied.
 * @n: the number memory byted to be copied.
 *
 * Return: a pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
