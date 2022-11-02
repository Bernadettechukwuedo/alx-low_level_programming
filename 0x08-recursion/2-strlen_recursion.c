#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s : string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
	_strlen_recursion(*s);
	_putchar(*s);
	}
}
