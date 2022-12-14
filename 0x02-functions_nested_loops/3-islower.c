
/**
 *main - checks if input is a lowercase character
 *
 *Return: 1 if lowercase or 0 if not
 */

int _islower(int c)
{
	int i;
	int alph[27]= "abcdefghijklmnopqrstuvxyz";

	for (i = 0; i < 26; i++)
	{
		if (c == alph[i])
		{
			return (1);
		}
	}
	return (0);
}
