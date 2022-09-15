#include "main.h"

/**
 * print_alphabet_x10 - prints 10X the alphabet in lowercase,
 * and follows with a new line
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alc;

	while (i++ <= 9)
	{
		for (alc = 'a'; alc <= 'z'; alc++)
			_putchar(alc);
		_putchar('\n');
	}
}
