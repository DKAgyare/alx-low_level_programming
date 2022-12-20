#include "main.h"

/**
 * _strlen - return length of string
 * @s: input
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++);

	return (length);
}
