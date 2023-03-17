#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: a pointer to the sqaure matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int left = 0;
	int right = 0;
	int i = 0;

	while (i < size)
	{
		left += *(a + (size * i) + i);
		right += (*(a + (size * i) + (size - i - 1)));
		i++;
	}
	printf("%d, ", left);
	printf("%d\n", right);
}
