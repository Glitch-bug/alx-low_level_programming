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
	char lnum;

	sprintf(buffer, "%d", c);
	ch = strlen(buffer);
	lnum = atoi(buffer[ch - 1]);
	printf("%d", lnum);
	return (lnum);
}
