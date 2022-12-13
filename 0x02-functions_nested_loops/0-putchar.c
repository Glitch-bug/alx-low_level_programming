0;10;1c0;10;1c#include <stdio.h>
#include "main.h"
/**
 *main - prints _putchar and newline
 *Return: 0
 */

int main(void)
{
	int i = 0;
	char mess [90] = "_putchar\n";
	while(mess[i] != '\0')
	{
		putchar(mess[i]);
	}
	return (0);
}
