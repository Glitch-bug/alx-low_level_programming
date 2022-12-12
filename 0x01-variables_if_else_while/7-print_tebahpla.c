#include <stdio.h>

/**
 *main - prints the alphabet lower case in reverse
 *Return: 0
 */

int main(void)
{
	int i;
	char letrs[27] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 26; i >= 0; i--)
	{
		putchar(letrs[i]);
	}
	putchar('\n');
	return (0);
}
