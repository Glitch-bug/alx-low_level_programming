#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints all arguemenst passed each on a new line
 *@argc: number of arguements
 *@argv: array of pointers to arguement
 *Return: zero
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
