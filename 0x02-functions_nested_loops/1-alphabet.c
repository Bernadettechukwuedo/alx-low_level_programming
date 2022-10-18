#include "main.h"
/**
 * print_alphabet - prints the alphabets in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}

	_putchar('\n');
}
