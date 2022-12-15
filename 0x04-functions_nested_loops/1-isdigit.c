/**
 *_isdigit - checks if input is a digit
 *@c - expects int and is checked against digits
 *Return: 1 if c is digit or 0 if c is not digit
 */



int _isdigit(int c)
{
	int i;
	int nums[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

		for(i = 0; i < 10; i++)
		{
			if(c == nums[i])
			{
				return (1);
			}
		}
	return (0);
}
