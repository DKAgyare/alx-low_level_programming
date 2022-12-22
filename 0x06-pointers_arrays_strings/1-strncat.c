#include "main.h"

/**
 * _strncat -concatenates two strings
 * @dest: stores string
 * @src: string source
 * @n: max number of bytes to copy
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
