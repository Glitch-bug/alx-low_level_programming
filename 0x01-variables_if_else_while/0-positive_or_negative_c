#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - tests whether randomly generated number is positive, negative or zero
 *Return: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	   printf("%i is negative", n);
	elif (n > 0)
	     printf("%i is positive", n);
	else
		printf("%i is zero", n);
	return (0);
}