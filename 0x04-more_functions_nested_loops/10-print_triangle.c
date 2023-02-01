#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: size of the triangle
 */


void print_triangle(int size)
{
	int i;
	int j;

	i = 0;
	for (; (size - i) > 0; i++)
	{
		for (j = 0; ((size - i) - j) > 0; j++)
		{
			_putchar(' ');
		}
		for (j = 0; (i - j) >= 0; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size == 0)
	{
		_putchar('\n');
	}
}
