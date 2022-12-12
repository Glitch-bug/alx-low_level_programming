#include <stdio.h>

/**
 *main - prints every combinaation of single digit base 10 numbers
 *Return: 0
 */

int main(void)
{
	int i;
	int letrs[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
		putchar(letrs[i] % 10 + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
