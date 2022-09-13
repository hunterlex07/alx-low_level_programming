#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int i;
	char ag;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (ag = 'a'; ag <= 'f'; ag++)
	{
		putchar(ag);
	}
	{
		putchar('\n');
	} return (0);
}
