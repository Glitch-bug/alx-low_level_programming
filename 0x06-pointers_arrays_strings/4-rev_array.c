#include <stdio.h>
/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: pointer to array of integers
 * @n: length of array
 */

void reverse_array(int *a, int n)
{

	int s[1000];
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = a[i];
	}
	i--;
	for (; i >= 0;)
	{
		*a = s[i];
		a++;
		i--;
	}
}
