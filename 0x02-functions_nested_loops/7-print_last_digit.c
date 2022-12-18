#include <stdio.h>
#include <string.h>

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
	lnum = buffer[ch - 1];
	putchar('0' + lnum);
	return (lnum);
}
