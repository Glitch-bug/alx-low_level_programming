#include <stdio.h>
#include "main.h"

/**
 *print_times_table - prints the n times table starting with 0
 *@n: int whose time table will be printed
 *Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;
	int mult;

	if ((n >= 0) && (n <= 15))
	{

		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				mult = i * j;
				if (j > 0 && j < n)
				{
					printf("% 4d,", mult);
				}
				else if (j == n && n > 0)
				{
					printf("% 4d", mult);
				}
				else if (j == n && n = 0)
				{
					printf("%d");
				}
				else
				{
					printf("%d,", mult);
				}
			}
			printf("\n");
		}
	}
}
