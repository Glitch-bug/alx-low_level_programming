#include <stdio.h>
#include <string.h>
#include "main.h"
// Dear future me count the capital R's end after last one you go mate
// Should that fail create a single string and divide its length by eight
/**
 *print_chessboard - a function that prints the chessboard.
 *@board: list of list representing chessboard
 */

void print_chessboard(char board[][8])
{
	int i = 0;
	int count = 0;

	while (count < 2)
	{
		if (i != 0 && ((*(*board + i) % 8) == 0))
			_putchar('\n');
		else if((*(*board + i)) == 'R')
			count += 1;
		_putchar(*(*board + i));
 		i++;
	}
}
