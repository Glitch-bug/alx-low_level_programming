#include <stdio.h>
#include <string.h>

/**
 *main - prints the sum of multiples of 3 or 5 under 1024
 *Return: 0
 */
int main()
{
	int i;
	int sum;

	sum = 0;
	for (i  = 0; i < 1024; i++)
	{
		if ( (i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
