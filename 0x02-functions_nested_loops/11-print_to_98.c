#include "main.h"
/**
 * print_to_98 - print natural numbers from 1 - 98
 * return: 0 or 1
 * @n: starting number
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i,", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i,", n);
		n++;
	}
	printf("98");
	_putchar('\n');
}
