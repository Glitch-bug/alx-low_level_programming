/**
0;10;1c * cap_string - capitalizes all words of a string
 * @char: string to be capitalized
 * Return: A pointer to the capitalized string
 */

char *cap_string(char *str)
{
	int cap = 0;
	char sep[] = " ,;.!?\"(){}";
	int i;
	char *hold = str;

	while (*str)
	{
		i = 0;
		if (cap == 1 && (*str >= 97 && *str <= 122))
		{
			cap = 0;
			*str -= 32;
		}else if (cap == 1 && (*str >= 65 && *str <= 90))
		{
			cap = 0;
		}
		while (sep[i])
		{
			if (*str == sep[i])
			{
				cap = 1;
			}
			i++;
		}
		str++;
	}
	return (hold);
}
