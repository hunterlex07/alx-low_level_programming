#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - pritns a string before main is executued
 */
void hare(void)
{
	printf("You're beat! and yet, you must alllow,\n"
			"I bore my house upon my back!\n");
}
