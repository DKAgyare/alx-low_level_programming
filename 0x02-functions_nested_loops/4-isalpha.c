include "main.h"
/**
 * _isalpha - checks for letters
 * Return: 1 if charcater is a letter or 0 if not
 * @c: character to be checked
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
