#include "main.h"
#include <stdio.h>
/**
 * print_chessboard -A function that prints the chessboard
 * @a: array of 8 rows
 */
void print_chessboard(char (*a)[8])
{
int row;
int column;
for (row = 0; row < 8; row++)
{
for (column = 0; column < 8; column++)
{
putchar(a[row][column]);
}
putchar('\n');
}
}

