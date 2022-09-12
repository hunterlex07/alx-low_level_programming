#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char ag, uG;

	for (ag = 'a'; ag <= 'z'; ag++)
	{
		putchar(ag);
	}
	for (uG = 'A'; uG <= 'Z'; uG++)
	{
		putchar(uG);
	}
	{
		putchar('\n');
	}
	return (0);
}
