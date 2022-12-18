#include "main.h"
#include <stdio.h>

/**
 *jack_bauer - prints every minute of the day, starting from 00:00 to 23:59
 *Return: void
 */


void jack_bauer(void)
{
	int min;
	int sec;

	min = 0;
	sec = 0;

	while (min < 25)
	{
		printf("%02d:%02d", min, sec);
		if (sec < 61)
		{
			sec++;
		}
		else
		{
			sec = 0;
			min++;
		}
	}
}
