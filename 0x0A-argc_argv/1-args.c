#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointer to the arguments
 *
 * Return: always o
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
