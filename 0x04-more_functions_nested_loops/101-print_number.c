#include "main.h"
#include <stdio.h>

/**
 * reduce -  a function that prints the power of ten needed to divde @left
 * @left: integer that needs dividing
 * Return: int power of ten
 */

int reduce(int left);
int reduce(int left)
{
	int div = 10;
	int count = 0;

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
	int size = 1;
	int fox = 1;
	int i;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	size = reduce(n);

	for (i = 0; i < size; i++)
	{
		fox = fox * 10;
	}
	_putchar((n / fox) + 48);
	n = n % fox;

	while (fox >= 10)
	{
		fox = fox / 10;
		_putchar((n / fox) + 48);
		n = n % fox;
	}

}
