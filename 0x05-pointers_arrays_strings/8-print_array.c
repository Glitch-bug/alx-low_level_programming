#include <stdio.h>
#include "main.h"

/**
 *print_array - prints n elements of a given array
 *@a: the super class of which a subset will be printed
 *@n: the number of elements to the subclass
 */

void print_array(int *a, int n)
{
	int re;

	re = 0;
	while (re < n)
	{
		if (re == n - 1)
		{
			printf("%i", *(a + re));
		}
		else
		{
			printf("%i, ", *(a + re));
		}
	}
}
