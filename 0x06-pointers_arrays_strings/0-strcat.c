#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: pointer to string
 * @src: string to be appended
 * Return: pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index;
	int len_dest;

	index = 0;
	while (dest[index])
		index++;
	for (len_dest = 0; src[len_dest]; len_dest++)
		dest[index++] = src[len_dest];
	return (dest);
}
