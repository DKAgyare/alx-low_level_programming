#include "main.h"

/**
 * _puts -prints string to stdout
 * @str: input
 */

void _puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		_putchar (str[string]);
	}
	_putchar ('\n');
	return (0);
}
