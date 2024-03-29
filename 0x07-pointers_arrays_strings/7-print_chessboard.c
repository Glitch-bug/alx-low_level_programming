#include <string.h>
#include "main.h"

/**
 *print_chessboard - a function that prints the chessboard.
 *@board: list of list representing chessboard
 */

void print_chessboard(char board[][8])
{
	int i = 0;

	while (i < 64)
	{
		if (i != 0 && (i % 8 == 0))
			_putchar('\n');
		_putchar(*(*board + i));
		i++;
	}
	_putchar('\n');
}
