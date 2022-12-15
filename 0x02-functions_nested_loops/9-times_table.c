#include "main.h"
/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int num, mul, product;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			product = num + mul;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
		}
		_putchar('\n');
	}
}
