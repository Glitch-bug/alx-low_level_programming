#include <stdio.h>
#include <math.h>

int is_prime(long n);

/**
 * is_prime - tells if a number is prime or not
 * @n: the number that may or may not be prime
 * Return: 1 for prime numbers 0 otherwise
 */
int is_prime(long n)
{
	long root;
	long i;

	if (n < 4)
	{
		return (1);
	}
	else
	{
		root = sqrt(n);
		for (i = 2; i <= root; i++)
		{
			if (n % i == 0)
				return (0);
		}
	}
	return (1);
}

/**
 * main - a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 * Return: the number 0
 */
int main(void)
{
	long large_num = 612852475143;
	long halfsies = 612852475143 / 2;
	long i;
	long large_fac;

	for (i = 1; i <= halfsies; i++)
	{
		if ((large_num % i) == 0)
		{
			large_fac = large_num / i;
			if (is_prime(large_fac) == 1)
			{
				printf("%ld\n", large_fac);
				return (0);
			}
		}
	}
	return (0);
}
