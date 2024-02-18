#include <iostream>
#include <string>
#include "Board.h"
using namespace std;

void Board::initializeBoard()
{
	
}
void Board::pieceOptions()
{
	
}

void Board::moveOptions()
{
	
}

void Board::printInitialBoard(int initialRow, int initialCol)
{
	
	int rows = 8;
	
	cout << "   _____ _____ _____ _____ _____ _____ _____ _____";
    for (int row = 0; row < ROWS; row++)
    {
		cout << "\n" << "  |     |     |     |     |     |     |     |     |";
		if (rows <= 8)
        {
			cout << "\n" << rows-- << " ";
			cout << "|";
		}
		
        for (int col = 0; col < COLS; col++)
        {
			cout << Piece::board[row][col];
			cout << "|";
        }
		cout << "\n" << "  |_____|_____|_____|_____|_____|_____|_____|_____|";
    }
	cout << "\n     A     B     C     D     E     F     G     H";
}


int Board::printFirstBoard(int numRow, int numCol)
{
	int row = 0, col = 0, retry = 0;
	
	// If the user chose a PAWN to move:
	if (Piece::gameboard[numRow][numCol] == "[p1]" || Piece::gameboard[numRow][numCol] == "[p2]" || Piece::gameboard[numRow][numCol] == "[p3]" || Piece::gameboard[numRow][numCol] == "[p4]" || Piece::gameboard[numRow][numCol] == "[p5]" || Piece::gameboard[numRow][numCol] == "[p6]" || Piece::gameboard[numRow][numCol] == "[p7]" || Piece::gameboard[numRow][numCol] == "[p8]")
	{
		int pawnCount = 0;
		// Displays an X one space forward:
		if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow + 0); col = (numCol - 8);
			if (Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				pawnCount+=1;
			}
		}
		// No place to move the pawn:
		if (pawnCount == 0)
		{
			cout << "\n" << "There is no place to move the pawn, try moving a different piece out of the way first." << endl;
			retry = 1;
		}
	}
	// If the user chose a ROOK to move:
	if (Piece::gameboard[numRow][numCol] == "[r1]" || Piece::gameboard[numRow][numCol] == "[r2]")
	{
		int rookCount = 0;
		// Displays Xs in all spaces vertically (UP):
		for (int i = 0; i < 7; i++)
		{	
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = numRow - i; col = numCol - 8;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= 0 && row <= 7 && col >= 0 && col <= 7 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					rookCount+=1;
				}
			}
		}
		// Displays Xs in all spaces vertically (DOWN):
		for (int i = 0; i < 7; i++)
		{
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = (numRow + 2) + i; col = numCol - 8;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= 0 && row <= 7 && col >= 0 && col <= 7 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					rookCount+=1;
				}
			}
		}
		// Displays Xs in all spaces horizontally (RIGHT):
		for (int i = 0 ; i < 7; i++)
		{
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = numRow + 1; col = (numCol - 7) + i;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				else if (row >= 0 && row <= 7 && col >= 0 && col <= 7 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					rookCount+=1;
				}
			}
		}
		// Displays Xs in all spaces horizontally (LEFT):
		for (int i = 0; i < 7; i++)
		{
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = numRow + 1; col = (numCol - 9) - i;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= 0 && row <= 7 && col >= 0 && col <= 7 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					rookCount+=1;
				}
			}
		}
		// No place to move the rook:
		if (rookCount == 0)
		{
			cout << "\n" << "There is no place to move the rook, try moving a different piece out of the way first." << endl;
			retry = 1;
		}
	}
	// If the user chose a BISHOP to move:
	if (Piece::gameboard[numRow][numCol] == "[b1]" || Piece::gameboard[numRow][numCol] == "[b2]")
	{
		int bishopCount = 0;
		// Displays Xs in all spaces diagonally (FORWARD-LEFT):
		for (int i = 0; i < 7; i++)
		{	
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = (numRow - 1) - i; col = (numCol - 1) - i;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= -1 && row <= 6 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					bishopCount+=1;
				}
			}
		}
		// Displays Xs in all spaces diagonally (BACKWARD-LEFT):
		for (int i = 0; i < 7; i++)
		{	
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = (numRow + 1) + i; col = (numCol - 1) - i;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= 0 && row <= 6 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					bishopCount+=1;
				}
			}
		}
		// Displays Xs in all spaces diagonally (FORWARD-RIGHT):
		for (int i = 0; i < 7; i++)
		{	
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = (numRow - 1) - i; col = (numCol + 1) + i;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= -1 && row <= 6 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					bishopCount+=1;
				}
			}
		}
		// Displays Xs in all spaces diagonally (BACKWARD-RIGHT):
		for (int i = 0; i < 7; i++)
		{	
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = (numRow + 1) + i; col = (numCol + 1) + i;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= -1 && row <= 6 && col >= 8 && col <= 15 && gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->board[row][col] = "  X  ";
					bishopCount+=1;
				}
			}
		}
		// No place to move the bishop:
		if (bishopCount == 0)
		{
			cout << "\n" << "There is no place to move the bishop, try moving a different piece out of the way first." << endl;
			retry = 1;
		}
	}
	// If the user chose a KNIGHT to move:
	if (Piece::gameboard[numRow][numCol] == "[n1]" || Piece::gameboard[numRow][numCol] == "[n2]")
	{
		int knightCount = 0;
		// Displays an X in a diagonal space (FORWARD-UPPER-RIGHT):
		if (numRow >= 0 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow - 2); col = (numCol + 1);
			if (row >= -1 && row <= 6 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				knightCount+=1;
			}
		}
		// Displays an X in a diagonal space (FORWARD-LOWER-RIGHT):
		if (numRow >= 0 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow - 1); col = (numCol + 2);
			if (row >= -1 && row <= 6 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				knightCount+=1;
			}
		}
		// Displays an X in a diagonal space (BACKWARD-UPPER-RIGHT):
		if (numRow >= 0 && numRow <= 6 && numCol >= 0 && numCol <= 15)
		{
			row = (numRow + 1); col = (numCol + 2);
			if (row >= -1 && row <= 6 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				knightCount+=1;
			}
		}
		// Displays an X in a diagonal space (BACKWARD-LOWER-RIGHT):
		if (numRow >= 0 && numRow <= 6 && numCol >= 0 && numCol <= 15)
		{
			row = (numRow + 2); col = (numCol + 1);
			if (row >= -1 && row <= 6 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				knightCount+=1;
			}
		}
		// Displays an X in a diagonal space (FORWARD-UPPER-LEFT):
		if (numRow >= 0 && numRow <= 6 && numCol >= 9 && numCol <= 15)
		{
			row = (numRow - 2); col = (numCol - 1);
			if (row >= -1 && row <= 6 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				knightCount+=1;
			}
		}
		// Displays an X in a diagonal space (FORWARD-LOWER-LEFT):
		if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow - 1); col = (numCol - 2);
			if (row >= -1 && row <= 6 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				knightCount+=1;
			}
		}
		// Displays an X in a diagonal space (BACKWARD-UPPER-LEFT):
		if (numRow >= 0 && numRow <= 6 && numCol >= 8 && numCol <= 14)
		{
			row = (numRow + 1); col = (numCol - 2);
			if (row >= -1 && row <= 6 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				knightCount+=1;
			}
		}
		// Displays an X in a diagonal space (BACKWARD-LOWER-LEFT):
		if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow + 2); col = (numCol - 1);
			if (row >= -1 && row <= 6 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				knightCount+=1;
			}
		}
		// No place to move the knight:
		if (knightCount == 0)
		{
			cout << "\n" << "There is no place to move the knight, try moving a different piece out of the way first." << endl;
			retry = 1;
		}
	}
	// If the user chose the QUEEN to move:
	if (Piece::gameboard[numRow][numCol] == "[q1]")
	{
		int queenCount = 0;
		// Displays Xs in all spaces vertically (UP):
		for (int i = 0; i < 7; i++)
		{	
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = numRow - i; col = numCol - 8;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= 0 && row <= 7 && col >= 0 && col <= 7 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					queenCount+=1;
				}
			}
		}
		// Displays Xs in all spaces vertically (DOWN):
		for (int i = 0; i < 7; i++)
		{
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = (numRow + 2) + i; col = numCol - 8;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= 0 && row <= 7 && col >= 0 && col <= 7 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					queenCount+=1;
				}
			}
		}
		// Displays Xs in all spaces horizontally (RIGHT):
		for (int i = 0 ; i < 7; i++)
		{
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = numRow + 1; col = (numCol - 7) + i;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				else if (row >= 0 && row <= 7 && col >= 0 && col <= 7 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					queenCount+=1;
				}
			}
		}
		// Displays Xs in all spaces horizontally (LEFT):
		for (int i = 0; i < 7; i++)
		{
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = numRow + 1; col = (numCol - 9) - i;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= 0 && row <= 7 && col >= 0 && col <= 7 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					queenCount+=1;
				}
			}
		}
		// Displays Xs in all spaces diagonally (FORWARD-LEFT):
		for (int i = 0; i < 7; i++)
		{	
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = (numRow - 1) - i; col = (numCol - 1) - i;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= -1 && row <= 7 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					queenCount+=1;
				}
			}
		}
		// Displays Xs in all spaces diagonally (BACKWARD-LEFT):
		for (int i = 0; i < 7; i++)
		{	
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = (numRow + 1) + i; col = (numCol - 1) - i;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= -1 && row <= 7 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					queenCount+=1;
				}
			}
		}
		// Displays Xs in all spaces diagonally (FORWARD-RIGHT):
		for (int i = 0; i < 7; i++)
		{	
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = (numRow - 1) - i; col = (numCol + 1) + i;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= -1 && row <= 7 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					queenCount+=1;
				}
			}
		}
		// Displays Xs in all spaces diagonally (BACKWARD-RIGHT):
		for (int i = 0; i < 7; i++)
		{	
			if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
			{
				row = (numRow + 1) + i; col = (numCol + 1) + i;
				if (Piece::gameboard[row][col] != "[  ]")
				{
					i = 8;
				}
				if (row >= -1 && row <= 7 && col >= 8 && col <= 15 && Piece::gameboard[row][col] == "[  ]")
				{
					cout << "";
					this->Piece::board[row][col] = "  X  ";
					queenCount+=1;
				}
			}
		}
		// No place to move the queen:
		if (queenCount == 0)
		{
			cout << "\n" << "There is place to move the queen, try moving a different piece out of the way first." << endl;
			retry = 1;
		}
	}
	// If the user chose the KING to move:
	if (Piece::gameboard[numRow][numCol] == "[k1]")
	{
		int kingCount = 0;
		// Displays an X (FORWARD-CENTER):
		if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow + 0); col = (numCol - 8);
			if (Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				kingCount+=1;
			}
		}
		// Displays an X (FORWARD-RIGHT):
		if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow + 0); col = (numCol - 7);
			if (Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				kingCount+=1;
			}
		}
		// Displays an X (FORWARD-LEFT):
		if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow + 0); col = (numCol - 9);
			if (Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				kingCount+=1;
			}
		}
		// Displays an X (LEFT):
		if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow + 1); col = (numCol - 9);
			if (Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				kingCount+=1;
			}
		}
		// Displays an X (BACKWARD-LEFT):
		if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow + 2); col = (numCol - 9);
			if (Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				kingCount+=1;
			}
		}
		// Displays an X (BACKWARD-CENTER):
		if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow + 2); col = (numCol - 8);
			if (Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				kingCount+=1;
			}
		}
		// Displays an X (BACKWARD-RIGHT):
		if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow + 2); col = (numCol - 7);
			if (Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				kingCount+=1;
			}
		}
		// Displays an X (RIGHT):
		if (numRow >= -1 && numRow <= 6 && numCol >= 8 && numCol <= 15)
		{
			row = (numRow + 1); col = (numCol - 7);
			if (Piece::gameboard[row][col] == "[  ]")
			{
				cout << "";
				this->Piece::board[row][col] = "  X  ";
				kingCount+=1;
				
			}
		}
		// No place to move the king:
		if (kingCount == 0)
		{
			cout << "\n" << "There is no place to move the king, try moving a different piece out of the way first." << endl;
			retry = 1;
		}
	}
	
    int rows = 8;
	
	cout << "   _____ _____ _____ _____ _____ _____ _____ _____";
    for (int row = 0; row < ROWS; row++)
    {
		cout << "\n" << "  |     |     |     |     |     |     |     |     |";
		if (rows <= 8)
        {
			cout << "\n" << rows-- << " ";
			cout << "|";
		}
		
        for (int col = 0; col < COLS; col++)
        {
			cout << this->Piece::board[row][col];
			cout << "|";
        }
		cout << "\n" << "  |_____|_____|_____|_____|_____|_____|_____|_____|";
    }
	cout << "\n     A     B     C     D     E     F     G     H";
	
	return retry;
}

void Board::printSecondBoard()
{
	int rows = 8;
	
	cout << "   _____ _____ _____ _____ _____ _____ _____ _____";
    for (int row = 0; row < ROWS; row++)
    {
		cout << "\n" << "  |     |     |     |     |     |     |     |     |";
		if (rows <= 8)
        {
			cout << "\n" << rows-- << " ";
			cout << "|";
		}
		
        for (int col = 0; col < COLS; col++)
        {
			cout << Piece::secondboard[row][col];
			cout << "|";
        }
		cout << "\n" << "  |_____|_____|_____|_____|_____|_____|_____|_____|";
    }
	cout << "\n     A     B     C     D     E     F     G     H";
}

void Board::printChessBoard()
{
    int rows = 8;
	
    for (int row = 0; row < ROWS; row++)
    {
		if (rows <= 8)
        {
			cout << "\n" << rows-- << " ";

		}
        for (int col = 0; col < COLS; col++)
        {
			cout << Piece::gameboard[row][col];
        }
    }
}

void Board::setLabel(string l) 
{
    label = l;
}

void Board::setChessLabel(string L)
{
	chessLabel = L;
}

string Board::getLabel()
{
	return label;
}

string Board::getChessLabel()
{
	return chessLabel;
}

void Board::setSpot(int r, int c)
{
	Piece::board[r][c];
}

void Board::setSecondSpot(int r, int c)
{
	Piece::secondboard[r][c];
}

void Board::setBoard(int r, int c, string newSpot)
{
    Piece::board[r][c] = newSpot;
}

void Board::setFirstBoard(int r, int c, string newSpot)
{
	Piece::board[r][c] = newSpot;
}

void Board::setSecondBoard(int r, int c, string newSpot)
{
	Piece::secondboard[r][c] = newSpot;
}

void Board::setChessSpot(int r, int c)
{
    Piece::board[r][c];
}

void Board::setChessBoard(int r, int c, string newSpot)
{
    Piece::gameboard[r][c] = newSpot;
}

void Board::clearXMarks()
{
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            if (Piece::board[r][c] == "  X  ")
            {
                Piece::board[r][c] = "     ";
            }
			if (Piece::secondboard[r][c] == "  X  ")
            {
                Piece::secondboard[r][c] = "     ";
            }
        }
    }
}
