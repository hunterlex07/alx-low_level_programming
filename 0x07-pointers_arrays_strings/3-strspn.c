#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment to be searched
 * @accept: the prefix
 *
 * Return: The number of bytes in @s which matches @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (bytes);
}
