#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the multiple of two arguements
 *@argc: number of arguements
 *@argv: array of arguements
 *Return: zero
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
