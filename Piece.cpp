#include <iostream>
#include <string>
#include "Piece.h"
using namespace std;

void Piece::initializeBoard()
{
	int r, c;
	
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
			cout << "";
			board[r][c] = "     ";
		}
		if (r >= 0 && r <= 8 && c >= 0 && c <= 8)
		{
			cout << "";
			board[r][c];
		}
    }
	
	for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            secondboard[r][c] = "     ";
        }
        if (r >= 0 && r <= 8 && c >= 0 && c <= 8)
        {
            cout << "";
            secondboard[r][c];
        }
    }
	
	for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            gameboard[r][c] = "[  ]";
        }
        if (r >= 0 && r <= 8 && c >= 0 && c <= 8)
        {
            cout << "";
            gameboard[r][c];
        }
    }
}

void Piece::pieceOptions()
{
	// Asks the user to chose which piece to move.
	cout << "\n\n" << "Chess Simulation Options";
	cout << "\n" << "1.] Select the piece you want to move (Enter the column, A-H, and the row, 1-8)";
	cout << "\n" << "2.] Start a new simulation (Enter N9)";
	cout << "\n" << "3.] End the simulation (Enter X0)" << endl;
	cout << "\n" << "Your move: ";
}

void Piece::moveOptions()
{
	cout << "\n\n" << "Chess Simulation Options";
	cout << "\n" << "1.] Select the spot you want to move to (Enter the column, A-H, and the row, 1-8)";
	cout << "\n" << "2.] Start a new simulation (Enter N9)";
	cout << "\n" << "3.] End the simulation (Enter X0)" << endl;
	cout << "\n" << "Your move: ";
}