#ifndef BOARD
#define BOARD
#include <iostream>
#include <string>
#include "Piece.h"
using namespace std;

class Board : public Piece
{
	private:
		string label; // Visible
		string chessLabel; // Hidden
	public:
		void initializeBoard();
		void pieceOptions();
		void moveOptions();
		void printInitialBoard(int initialRow, int initialCol); // Visible
		int printFirstBoard(int numRow, int numCol); // Visible
		void printSecondBoard(); // Visible
		void printChessBoard(); // Hidden
		void setLabel(string l); // Visible
		void setChessLabel(string L); // Hidden
		string getLabel(); // Visible
		string getChessLabel(); // Hidden
		void setSpot(int r, int c); // Visible
		void setSecondSpot(int r, int c); // Visible
		void setChessSpot(int r, int c); // Hidden
		void setBoard(int r, int c, string newSpot); // Visible
		void setFirstBoard(int r, int c, string newSpot); // Visible
		void setSecondBoard(int r, int c, string newSpot); // Visible
		void setChessBoard(int r, int c, string newSpot); // Hidden
		void clearXMarks();
};

#endif