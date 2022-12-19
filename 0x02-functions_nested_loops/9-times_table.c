#include <stdio.h>
#include "main.h"

/**
 *times_table - prints the nine times table starting with 0
 *Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int mult;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("  ");
			mult = i * j;
			printf("%d,",mult);
		}
		printf("\n");
	}
}
