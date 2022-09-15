#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 * and follows with a new line
 */
void print_alphabet(void)
{
	char alc;

	for (alc = 'a'; alc <= 'z'; alc++)
		_putchar(alc);

	_putchar('\n');
}
