#include <stdio.h>
int pow_ten(int n);
/**
 * _atoi - a function that converts a string to an integer.
 *@s: string to be converted
 * Return: an integer
 */

int _atoi(char *s)
{
	int i;
	int count = 0;
	int neg = 0;
	int pos = 0;
	int start = -1;
	int num_start = 47;
	int num_end = 58;
	int end = 0;
	int charge = 1;
	unsigned int final = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if ((int)*(s + i) > num_start && (int)*(s + i) < num_end)
		{
			if (start == -1)
			{
				start = i;
			}
			count++;
		}
		else if ((*(s + i) == '-') && (start < 0))
		{
			neg++;
		}
		else if (((int)*(s + i) == '+') && (start < 0))
		{
			pos++;
		}
		else if (start != -1)
		{
			break;
		}
	}
	end = i;
	i = start;
	if (neg % 2 != 0 && neg != 0)
	{
		charge = -1;
	}
	while (i < end)
	{
		if ((int)*(s + i) > num_start && (int)*(s + i) < num_end)
		{
			final += ((int)*(s + i) - (int)'0') * pow_ten(count);
			count -= 1;
		}
		i++;
	}
	return (final * charge);
}



/**
 *pow_ten- finds ten to the power @n -1
 *@n: one more than the power to raise ten to
 *Return: int ten raised to power n -1
 */
int pow_ten(int n)
{
	int i = 1;

	for (; n > 1; n--)
	{
		i *= 10;
	}

	return (i);
}
