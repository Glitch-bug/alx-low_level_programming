#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* more headers goes there */

/**
 *main - prints the last digit of a randomly generated number
 *Return: zero
 */
int main(void)
{
	int n;
	int ch;
	char buffer[50];
	char lnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(buffer, "%d", n);
	ch = strlen(buffer);
	lnum = buffer[ch - 1];

	if (n < 0)
	{
		printf("Last digit of %i is -%c and is less than 6 and not 0\n",
		       n, lnum);
	}
	else if ((int) lnum == '0')
	{
		printf("Last digit of %i is %c and is 0\n", n, lnum);
	}
	else if ((int) lnum < '6')
	{
		printf("Last digit of %i is %c and is less than 6 and not 0\n",
		       n, lnum);
	}
	else
	{
		printf("Last digit of %i is %c and is greater than 5\n",
		       n, lnum);
	}
	return (0);
}
