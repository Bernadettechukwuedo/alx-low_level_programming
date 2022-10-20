#include "main.h"
/**
 * print_numbers - prints the numbers
 *
 * Return: int
 */
void print_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
	_putchar('0' + c);
	}
	_putchar('\n');
}
