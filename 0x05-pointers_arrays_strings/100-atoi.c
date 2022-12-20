#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _atoi - covert strin to integer.
 * @s: Pointer to a character
 * Return: 0
 */
int _atoi(char *s)
{
	int sign;
	int num;
	char *temp;

	temp = s;
	num = 0;
	sign = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}
	if (*temp != '0')
	{
		do {
			num = num * 10 + (*temp - '0');
			temp++;
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp > '9');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}
