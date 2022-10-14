#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;
	char alphABET;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}

	for (alphABET = 'A'; alphABET <= 'Z'; alphABET++)
	{
	putchar(alphABET);
	}


	putchar('\n');
	return (0);
}
