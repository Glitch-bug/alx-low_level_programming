#include <stdio.h>
#include <unistd.h>

/**
 *main - prints and that piece of art is usefu blah blah
 *Return: 0
 */

int main(void)
{
     if (write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	       59) != 59)
     {
	     write(2, "There was an error writing to standard out\n", 44);
	     return -1;
     };
     return (0);
}
