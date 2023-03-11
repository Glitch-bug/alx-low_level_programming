#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *print_chessboard - a function that prints the chessboard.
 *@board: list of list representing chessboard
 */

void print_chessboard(char board[][8])
{
	int i = 0;
	int count = 1;

	while (count < 2)
	{
		if (i != 0 && (i % 8 == 0))
			_putchar('\n');
		else if ((*(*board + i)) == 'R')
			count++;
		_putchar(*(*board + i));
		i++;
	}
	_putchar('\n');
}
