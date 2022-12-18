#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers from 1 - 98
 * return: 0 or 1
 * @n: starting number
 */
void print_to_98(int n)
{
	for (n = 1, n <= 98, n++;)
	{
		printf("%i,", n);
	}
	_putchar("\n");
	return (0);
}
