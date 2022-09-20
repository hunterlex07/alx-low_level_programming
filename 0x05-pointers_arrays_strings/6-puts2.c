#include "main.h"

/**
 * puts2 - prints one char out of two of a string.
 * @str: the string
 */
void puts2(char *str)
{
	int len = 0, index = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
