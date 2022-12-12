#include <stdio.h>

/**
 *main - prints every combinaation of single digit base 10 numbers
 *Return: 0
 */

int main(void)
{
	int i;
	int j;
	int m;
	/**
	 *int first = 0;
	 *int f_space = 0;
	 *int space = 1;
	 */
	int letrs[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
		j = i+1
		for (m = 0; m < j; m++)
		{
			putchar(letrs[m] % 10 + '0');
		}
		putchar('\n');
	}
	putchar('\n');
	return (0);
}
