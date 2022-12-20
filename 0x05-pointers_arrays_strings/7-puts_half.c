#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: input
 */

void puts_half(char *str)
{
	int index;
	int half;

	index = 0;
	while (str[index] != '\0')
		index++;
	haf = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}
