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
	char *start = *dest;

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (start);
}
