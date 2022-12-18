#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *print_last_digit - prints last digit of integer input
 *@c: integer input
 *Return: last digit
 */

int print_last_digit(int c)
{
	int ch;
	char buffer[50];
	char lnum[1];

	sprintf(buffer, "%d", c);
	ch = strlen(buffer);
	lnum[0] = buffer[ch - 1];
	printf("%d", atoi(lnum));
	return (atoi(lnum));
}
