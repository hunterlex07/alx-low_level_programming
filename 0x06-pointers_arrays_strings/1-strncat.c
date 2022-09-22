#include "main.h"

/**
 * _strncat - concatenates two strings pointed to by:
 * @src: the string with @n to be added to @dest
 * @dest: the pointer to the string to be added to @src
 * @n: a number of bytes to be added to @dest from @src
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
