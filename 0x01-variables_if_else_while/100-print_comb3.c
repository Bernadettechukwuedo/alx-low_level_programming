#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int y;
	int x;

	for (y = 0; x < 9; y++)
	{
		for (x = 0; y < 9; x++)
		{
			putchar((y % 10) + 0);
			putchar((x % 10) + 0);

			if (y == 8 && x == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
