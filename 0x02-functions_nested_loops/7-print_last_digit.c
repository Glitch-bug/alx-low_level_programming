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
	int rnum;
	char buffer[50];
	char lnum;

	putchar('n');
	sprintf(buffer, "%d", c);
	ch = strlen(buffer);
	lnum = buffer[ch - 1];
	rnum = (int)(lnum) - 48;
	printf("%d", rnum);
	putchar('t');
	return (rnum);
}
