/**
 *rot13 - a function that encodes a string using rot13
 *@str: string pointer to be encoded
 *Return: encoded string
 */


char *rot13(char *str)
{
	char line[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		       'L', 'M', 'N',
		       'O', 'P',
		       'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a',
		       'b', 'c',
		       'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
		       't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	char warped[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
			 'Y', 'Z',
			 'A', 'B',
		  'C', 'D',
		  'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p',
			 'q', 'r', 's',
		  't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e',
			 'f', 'g',
			 'h', 'i', 'j', 'k', 'l', 'm'};
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; line[j]; j++)
		{
			if (line[j] == str[i])
			{
				str[i] = warped[j];
				break;
			}
		}
	}
	return (str);
}
