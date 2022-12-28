#include <stdio.h>

/**
 *main - prints first 50 numbers of fibonacci sequence
 *Return: zero
 */

int main(void)
{
	int i;
	int max = 4000000;
	long num = 1;
	long last = 1;
	long hold = 0;
	long even = 0;

	for (i = 0; num < max; i++)
	{
		hold = num;
		num += last;
		last = hold;
		if (num % 2 == 0)
		{
			even += num;
		}
	}
	printf("%ld\n", even);
	return (0);
}
