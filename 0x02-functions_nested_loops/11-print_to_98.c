#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * in order, separated by a comma, followed
 * by a space and ends in a new line.
 *
 * @n: the number passed to the function
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d", n);
	}
}
