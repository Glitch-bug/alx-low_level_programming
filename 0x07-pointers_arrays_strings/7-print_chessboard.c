#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *print_chessboard - a function that prints the chessboard.
 *@board: list of list representing chessboard
 */

void print_chessboard(char board[][8])
{
	int count = 8;
	int i = 0;
	int end = strlen(*board);

	while (i < end)
	{
		if ((i != 0) && (i % count == 0))
		{
			_putchar('\n');
		}
		_putchar(*(*board + i));
		i++;
	}
	_putchar('\n');
}
