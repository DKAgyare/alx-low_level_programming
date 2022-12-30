#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * Return: value of last digit
 * @n: number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

	return (0);
}
