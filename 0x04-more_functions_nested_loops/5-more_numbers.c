#include "main.h"
/**
 *more_numbers - a function that prints 10 times the numbers, from 0 to 14,
 *followed by a new line
 *Return: void
 */

void more_numbers(void)
{
	int i;
	char nums[] = "01234567891011121314";
	int j;

	j = 0;
	while (j < 10)
	{

		for (i = 0; nums[i]; i++)
		{
			_putchar(nums[i]);
		}
		_putchar('\n');
		j++;
	}
}
