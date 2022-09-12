#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char ag;

	for (ag = 'a'; ag <= 'z' && ag != 'e' && ag != 'q'; ag++)
	{
		putchar(ag);
	}
	{
		putchar('\n');
	}
	return (0);
}
