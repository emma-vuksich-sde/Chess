#ifndef PIECE
#define PIECE
#include <iostream>
#include <string>
using namespace std;

const int ROWS = 8;
const int COLS = 8;

class Piece
{
	public:
		string board[ROWS][COLS]; // Visible
		string secondboard[ROWS][COLS]; // Visible
		string gameboard[ROWS][COLS]; // Hidden
		void initializeBoard();
		void pieceOptions();
		void moveOptions();
};

#endif