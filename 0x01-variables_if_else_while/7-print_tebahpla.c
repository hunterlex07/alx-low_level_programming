#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char ag;

	for (ag = 'z'; ag >= 'a'; ag--)
	{
		putchar(ag);
	}
	{
		putchar('\n');
	}
	return (0);
}
