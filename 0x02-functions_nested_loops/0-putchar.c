#include "main.h"
#include <unistd.h>

/**
 * _putchar - a syscall function
 *
 * return: returns write
 *
 * main - prints "_putchar" followed b a new line
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
