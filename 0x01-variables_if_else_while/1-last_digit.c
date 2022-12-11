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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(buffer, "%d", n);
	ch = strlen(buffer);
	printf("%c\n", buffer[ch - 1]);
	return (0);
}
