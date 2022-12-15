#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 1 if letter is lowercase,0 for uppercase
 * @c: the character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
