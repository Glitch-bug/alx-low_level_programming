#include <stdio.h>

/**
 *main - prints and that piece of art is usefu blah blah
 *Return: 0
 */

int main(void)
{
	if (write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 36) != 36) {
		write(2, "There was an error writing to standard out\n", 44);
		return (-1);
	}
	return (0)
}
