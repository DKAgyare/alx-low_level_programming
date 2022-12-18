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
			product = num * mul;
			if (mul == 0)
			{
				_putchar('0' + product);
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
			if (mul <= 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
