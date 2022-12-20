#include <stdio.h>
#include "main.h"

/**
 * print_rev - reverse string.
 * @s: string to pirnt
 */

void print_rev(char *s)
{
	int rev = 0;
	int p;

	while (*s != '\0')
	{
		rev++;
		s++;
	}
	s--;
	for (p = rev; p > 0; p--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
