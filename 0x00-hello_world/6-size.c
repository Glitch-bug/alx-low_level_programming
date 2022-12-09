#include <stdio.h>

/**
 *main - print the sizes of the various data type
 *Return: 0
 **/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %i byte(s)", (int) sizeof(a));
	printf("Size of an int: %i byte(s)", (int) sizeof(b));
	printf("Size of a long int: %i byte(s)", (int) sizeof(c));
	printf("Size of a long long int: %i byte(s)", (int) sizeof(d));
	printf("Size of a float: %i byte(s)", (int) sizeof(e));
}
