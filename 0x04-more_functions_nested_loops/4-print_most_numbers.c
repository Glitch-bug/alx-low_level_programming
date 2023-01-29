#include "main.h"
/**
 *print_numbers -  a function that prints the numbers, from 0 to 9, followed
 * y a new line, except 2 and 4.
 *Return: void
 */

void print_numbers(void)
{
	int i;
	char nums[] = "01356789";

	for (i = 0; nums[i]; i++)
	{
		_putchar(nums[i]);
	}
	_putchar('\n');
}
