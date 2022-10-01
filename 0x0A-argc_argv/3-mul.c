#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers, followed by a new line
 * @argc: the number of arguments supplied to tje program
 * @argv: an array of pointers to the arguments
 *
 * Return: if the program receives two arguments, o
 * and if it does not receive two arguments return error, a new line and 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (10);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);
	return (0);
}
