#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet,in lowercase
 * return Always:0
 */
void print_alphabet_x10(void)
{
	char alph;
	int num;

	for (num = 0; num <= 9; num++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
