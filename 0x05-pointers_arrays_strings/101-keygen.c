#include "main.h"

/**
 * main - random valid pasowrd generator
 * Return: 0 
 */
int main(void)
{
	int pass, sun;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 -sum);

	return (0);
}
