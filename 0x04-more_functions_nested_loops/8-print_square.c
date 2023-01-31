#include "main.h"

/**
 * print_square -  a function that prints a square, followed by a new line.
 * @size: is the size of the square
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	for (; (size - i) > 0; i++)
	{
		j = 0;
		for (; (size - j) > 0; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
