#include <stdio.h>

/**
 *main - prints first 50 numbers of fibonacci sequence
 */

void main(void)
{
	int max = 50;
	int num = 1;
	int last = 1;
	int hold = 0;

	for (i = 0; i < 50; i++)
	{
		printf("%d\n", num);
		hold = num;
		num += last;
		last = hold;
	}
}
