#include "main.h"

/**
 * print_chessboard -display a board of chess
 * @a:parameter of the chessboard
 * Return: board
 */

void print_chessboard(char (*a)[8])
{
	int row = 0, col;

	while (row < 8)
	{
		for (col = 0; col < 8; col += 1)
		{
			_putchar(a[row][col]);
		}
		row += 1;
		_putchar('\n');
	}
}
