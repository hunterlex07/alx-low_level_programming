#include "main.h"

/**
 * _strncpy - copies a string
 * @src: the string with @n to be added to @dest
 * @dest: the pointer to the string to be added to @src
 * @n: a number of bytes to be added to @dest from @src
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (dest[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[src_len++] = src[index];

	return (dest);
}
