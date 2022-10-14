#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char base;

	for (base = 0; base <= 9; base++)
	{
	putchar(base);
	}

	for (base = "A"; base < "F"; base++)
	{
	putchar(base);
	}

	putchar('\n');

	return (0);
}
