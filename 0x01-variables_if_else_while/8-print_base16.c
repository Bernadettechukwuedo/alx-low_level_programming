#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char base;

	for (base = 48; base <= 57; base++)
	{
	putchar(base);
	}

	for (base = 97; base <= 102; base++)
	{
	putchar(base);
	}

	putchar('\n');

	return (0);
}
