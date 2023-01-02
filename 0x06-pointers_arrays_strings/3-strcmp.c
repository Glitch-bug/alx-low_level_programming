/**
 *_strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *Return: difference between the two strings
 *negative if second string is bigger
 */


int _strcmp(char *s1, char *s2)
{
	int dif = 0;
	
	while(*s1 || *s2)
	{
		dif = *s1 - *s2;
		if (dif != 0)
		{
			return (dif);
		}
		s1++;
		s2++;
	}
	return (0);
}
