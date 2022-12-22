#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to string
 * src: string to be appended
 * Return: pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int len_dest = 0;

	while (dest[index++])
		len_dest++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] - src[index];

	return (dest);
}
