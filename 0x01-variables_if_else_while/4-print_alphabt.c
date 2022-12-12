#include <stdio.h>

/**
 *main - prints the alphabet lower case without q and e
 *Return: 0
 */

int main(void)
{
	int i;
	char letrs[25] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 24; i++)
	{
		putchar(letrs[i]);
	}
	putchar('\n');
	return (0);
}
