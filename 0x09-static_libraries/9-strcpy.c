#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src,
 * including the terminating null byte (\0),
 * to a buffer pointed to by @dest.
 * @dest: a buffer for the copied string
 * @src: the string to copy
 *
 * Return: a pointer to the string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
