#include <stdio.h>

/**
 *main - prints every combinaation of single digit base 10 numbers
 *Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int numrs[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10 ; j++)
		{
			for (k = j +1; k < 10; k++)
			{
				putchar(numrs[i] % 10 + '0');
				putchar(numrs[j] % 10 + '0');
				putchar(numrs[k] % 10 + '0');
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
