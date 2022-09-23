#include "main.h"

/**
 * string_toupper - changes the lowercase letters of a string to Uppercase.
 * @str: the string to be worked on.
 *
 * Return: a pointer to the uppercase string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}
	return (str);
}
