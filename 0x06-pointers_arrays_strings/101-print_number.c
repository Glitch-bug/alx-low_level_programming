#include "main.h"
#include <stdio.h>

/**
 * reduce -  a function that prints the power of ten needed to divde @left
 * @left: integer that needs dividing
 * Return: int power of ten
 */

unsigned int reduce(unsigned int left);
unsigned int reduce(unsigned int left)
{
	unsigned int div = 10;
	unsigned int count = 0;

	while (left > 9)
	{
		left = left / div;
		count++;
	}

	return (count);
}

/**
 * print_number - a function that prints an integer.
 * @n: the integer
 */

void print_number(int n)
{
	unsigned int size = 1;
	unsigned int fox = 1;
	unsigned int i;
	unsigned int abs_n;

	if (n < 0)
	{
		_putchar('-');
	}

	abs_n = n < 0 ? -((unsigned int)(n))
		: +((unsigned int)(n));

	size = reduce(abs_n);

	for (i = 0; i < size; i++)
	{
		fox = fox * 10;
	}
	_putchar((abs_n / fox) + 48);
	abs_n = abs_n % fox;

	while (fox >= 10)
	{
		fox = fox / 10;
		_putchar((abs_n / fox) + 48);
		abs_n = abs_n % fox;
	}

}
