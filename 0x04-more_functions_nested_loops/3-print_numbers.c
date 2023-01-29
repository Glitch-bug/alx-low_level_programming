/**
 *print_numbers -  a function that prints the numbers, from 0 to 9, followed
 * by a new line.
 */

void print_numbers(void)
{
	int i;
	char nums[] = "1234567890";

	for (i = 0; nums[i]; i++)
	{
		_putchar(nums[i]);
	}
}
