#include "main.h"

/**
 *print_to_98 - prints from int input to 98
 *@n: int input decides where to start count
 *Return: void
 */

void print_to_98(int n)
{
	while (n < 99)
	{
		if (n < 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
	}
}
