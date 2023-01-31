#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: determines height of the diagonal
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; (n - i) > 0; i++)
	{
		for (j = 0; (i - j) > 0; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}

}
