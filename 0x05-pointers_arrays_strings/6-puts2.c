#include "main.h"
#include <stdio.h>

/**
 * puts2 - function should print only on character at a time
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int oneCh = 0;
	int n = 0;
	char *m = str;
	int o;

	while (*m != '\0')
	{
		m++;
		oneCh++;
	}
	n = oneCh - 1;
	for (o = 0; o <= n; o++)
	{
		if (o % 2 == 0)
		{
			putchar(str[0]);
		}
	}
	putchar('\n');
}
