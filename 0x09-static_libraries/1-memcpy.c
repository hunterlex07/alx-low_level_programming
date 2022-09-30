#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: a pointer to the detsination memory area.
 * @src: the memory area that gets copied.
 * @n: the number of bytes that gets copied
 *
 * Return: a pinter to destination @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
