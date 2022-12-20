#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed to src to buffer
 * @dest: dest
 * @src: copied from
 * Return: COpy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	for (src = 0; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	dest = '\0';
	return (start);
}
