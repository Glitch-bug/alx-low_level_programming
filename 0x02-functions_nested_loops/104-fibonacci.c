#include <stdio.h>

/**
 *main - prints first 50 numbers of fibonacci sequence
 *Return: zero
 */

int main(void)
{
	int i;
	int max = 98;
        unsigned long num = 1;
        unsigned long last = 1;
	unsigned long hold = 0;

	for (i = 0; i < max; i++)
	{
		if (i == max - 1)
		{
			printf("%lu\n", num);
		}
		else
		{
			printf("%lu, ", num);
		}
		hold = num;
		num += last;
		last = hold;
	}
	return (0);
}
