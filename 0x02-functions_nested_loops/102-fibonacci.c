#include <stdio.h>

/**
 *main - prints first 50 numbers of fibonacci sequence
 *Return: zero
 */

int main(void)
{
	int i;
	int max = 50;
	int num = 1;
	int last = 1;
	int hold = 0;

	for (i = 0; i < max; i++)
	{
		if (i == max - 1)
		{
			printf("%d\n", num);
		}
		else
		{
			printf("%d, ", num);
		}
		hold = num;
		num += last;
		last = hold;
	}
	return (0);
}
