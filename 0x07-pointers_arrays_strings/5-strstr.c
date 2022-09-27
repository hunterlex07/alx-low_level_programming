#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the string to be searched
 * @needle: the substring searched for in @haystack
 *
 * Return: if success, a pointer to the beginning of the substring
 * and if not found, NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
