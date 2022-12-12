#include <stdio.h>

/**
 *main - prints single digit base 10 numbers
 *Return: 0
 */

int main(void)
{
	int i;
	int nums[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char abc[6] = "abcdef";

	for (i = 0; i < 10; i++)
	{
		putchar(nums[i] % 10 + '0');
	}
	for (i = 0; i < 6; i++)
	{
		putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}
