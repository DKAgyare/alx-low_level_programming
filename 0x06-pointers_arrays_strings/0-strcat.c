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

	while (dest[index] != '\0')
	{
		index++;
	}
	len_dest = 0;
	while (src[len_dest] != '\0')
	{
		dest[index] = src[index];
		index++;
		len_dest++;
	}
	dest[index] = '\0';
	return (dest);
}
