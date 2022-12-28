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
			printf("%ld\n", num);
		}
		else
		{
			printf("%ld, ", num);
		}
		hold = num;
		num += last;
		last = hold;
	}
	return (0);
}
