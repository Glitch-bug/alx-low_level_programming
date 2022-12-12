#include <stdio.h>

/**
 *main - prints every combinaation of single digit base 10 numbers
 *Return: 0
 */

int main(void)
{
	int i;
	int numrs[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(numrs[i] % 10 + '0');
			putchar(numrs[j] % 10 + '0');
		}
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
