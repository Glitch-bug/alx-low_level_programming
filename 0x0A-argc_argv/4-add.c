#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds some numbers and prints the sum
 *@argc: number of arguements
 *@argv: array of arguements
 *Return: zero on succes and one on failure
 */

int main(int argc, char *argv[])
{
	int i;
	int len;
	int sum = 0;
	int j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			len = strlen(argv[i]);
			for (j = 0; j < len; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("0\n");
	return (0);
}
