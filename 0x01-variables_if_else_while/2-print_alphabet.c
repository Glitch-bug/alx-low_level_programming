#include <stdio.h>

/**
 *main - prints the alphabet uppercase and lower case
 *Return: 0
 */

int main(void)
{
	int i;
	char letrs[27] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(letrs[i]);
	}
	putchar('\n');
	return (0);
}
