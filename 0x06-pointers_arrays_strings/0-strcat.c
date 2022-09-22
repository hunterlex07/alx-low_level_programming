#include "main.h"

/**
 * _strcat - concatenates two strings pointed to by:
 * @src: the string to be added to @dest
 * @dest: the pointer to the string to be added to @src
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
