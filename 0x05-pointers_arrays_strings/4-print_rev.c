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
	for (o = rev; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n')
}
