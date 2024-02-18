#include <iostream>
#include <string>
#include "Board.h"
#include "Piece.h"
using namespace std;

int main()
{
	Board chess, pawn1, pawn2, pawn3, pawn4, pawn5, pawn6, pawn7, pawn8, bishop1, bishop2, knight1, knight2, rook1, rook2, queen, king, numberedMoves, selected;
	int initialRow = 0, initialCol = 0, numRow = 0, numCol = 0, newRow = 0, newCol = 0, retry = 0;
	char initialChar, charCol, newChar;
	// The start of a new game.
	newGame:
	// Initializes all the boards.
	chess.Piece::initializeBoard();
	// Prints the key.
	cout << "                   ________________";
	cout << "\n" << "                  |_______KEY______|";
	cout << "\n" << "                  |                |";
	cout << "\n" << "                  |   b - BISHOP   |";
	cout << "\n" << "                  |   k - KING     |";
	cout << "\n" << "                  |   n - KNIGHT   |";
	cout << "\n" << "                  |   p - PAWN     |";
	cout << "\n" << "                  |   r - ROOK     |";
	cout << "\n" << "                  |   q - QUEEN    |";
	cout << "\n" << "                  |________________|";
	cout << "\n";
	// Pawn1 initial info.
	pawn1.setLabel("  p  ");
	pawn1.setChessLabel("[p1]");
	initialRow = 2;
	initialChar = 'A';
	initialCol = (initialChar - '0') - 9;
	pawn1.setSpot(initialRow + 3, initialCol);
	pawn1.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 3, initialCol, pawn1.getLabel());
	chess.setSecondBoard(initialRow + 3, initialCol, pawn1.getLabel());
	chess.setChessBoard(initialRow + 3, initialCol, pawn1.getChessLabel());
	// Pawn2 initial info.
	pawn2.setLabel("  p  ");
	pawn2.setChessLabel("[p2]");
	initialRow = 2;
	initialChar = 'B';
	initialCol = (initialChar - '0') - 9;
	pawn2.setSpot(initialRow + 3, initialCol);
	pawn2.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 3, initialCol, pawn2.getLabel());
	chess.setSecondBoard(initialRow + 3, initialCol, pawn2.getLabel());
	chess.setChessBoard(initialRow + 3, initialCol, pawn2.getChessLabel());
	// Pawn3 initial info.
	pawn3.setLabel("  p  ");
	pawn3.setChessLabel("[p3]");
	initialRow = 2;
	initialChar = 'C';
	initialCol = (initialChar - '0') - 9;
	pawn3.setSpot(initialRow + 3, initialCol);
	pawn3.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 3, initialCol, pawn3.getLabel());
	chess.setSecondBoard(initialRow + 3, initialCol, pawn3.getLabel());
	chess.setChessBoard(initialRow + 3, initialCol, pawn3.getChessLabel());
	// Pawn4 initial info.
	pawn4.setLabel("  p  ");
	pawn4.setChessLabel("[p4]");
	initialRow = 2;
	initialChar = 'D';
	initialCol = (initialChar - '0') - 9;
	pawn4.setSpot(initialRow + 3, initialCol);
	pawn4.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 3, initialCol, pawn4.getLabel());
	chess.setSecondBoard(initialRow + 3, initialCol, pawn4.getLabel());
	chess.setChessBoard(initialRow + 3, initialCol, pawn4.getChessLabel());
	// Pawn5 initial info.
	pawn5.setLabel("  p  ");
	pawn5.setChessLabel("[p5]");
	initialRow = 2;
	initialChar = 'E';
	initialCol = (initialChar - '0') - 9;
	pawn5.setSpot(initialRow + 3, initialCol);
	pawn5.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 3, initialCol, pawn5.getLabel());
	chess.setSecondBoard(initialRow + 3, initialCol, pawn5.getLabel());
	chess.setChessBoard(initialRow + 3, initialCol, pawn5.getChessLabel());
	// Pawn6 initial info.
	pawn6.setLabel("  p  ");
	pawn6.setChessLabel("[p6]");
	initialRow = 2;
	initialChar = 'F';
	initialCol = (initialChar - '0') - 9;
	pawn6.setSpot(initialRow + 3, initialCol);
	pawn6.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 3, initialCol, pawn6.getLabel());
	chess.setSecondBoard(initialRow + 3, initialCol, pawn6.getLabel());
	chess.setChessBoard(initialRow + 3, initialCol, pawn6.getChessLabel());
	// Pawn7 initial info.
	pawn7.setLabel("  p  ");
	pawn7.setChessLabel("[p7]");
	initialRow = 2;
	initialChar = 'G';
	initialCol = (initialChar - '0') - 9;
	pawn7.setSpot(initialRow + 3, initialCol);
	pawn7.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 3, initialCol, pawn7.getLabel());
	chess.setSecondBoard(initialRow + 3, initialCol, pawn7.getLabel());
	chess.setChessBoard(initialRow + 3, initialCol, pawn7.getChessLabel());
	// Pawn8 initial info.
	pawn8.setLabel("  p  ");
	pawn8.setChessLabel("[p8]");
	initialRow = 2;
	initialChar = 'H';
	initialCol = (initialChar - '0') - 9;
	pawn8.setSpot(initialRow + 3, initialCol);
	pawn8.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 3, initialCol, pawn8.getLabel());
	chess.setSecondBoard(initialRow + 3, initialCol, pawn8.getLabel());
	chess.setChessBoard(initialRow + 3, initialCol, pawn8.getChessLabel());
	// Rook1 initial info.
	rook1.setLabel("  r  ");
	rook1.setChessLabel("[r1]");
	initialRow = 1;
	initialChar = 'A';
	initialCol = (initialChar - '0') - 9;
	rook1.setSpot(initialRow + 5, initialCol);
	rook1.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 5, initialCol, rook1.getLabel());
	chess.setSecondBoard(initialRow + 5, initialCol, rook1.getLabel());
	chess.setChessBoard(initialRow + 5, initialCol, rook1.getChessLabel());
	// Rook2 initial info.
	rook2.setLabel("  r  ");
	rook2.setChessLabel("[r2]");
	initialRow = 1;
	initialChar = 'H';
	initialCol = (initialChar - '0') - 9;
	rook2.setSpot(initialRow + 5, initialCol);
	rook2.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 5, initialCol, rook2.getLabel());
	chess.setSecondBoard(initialRow + 5, initialCol, rook2.getLabel());
	chess.setChessBoard(initialRow + 5, initialCol, rook2.getChessLabel());
	// Bishop1 initial info.
	bishop1.setLabel("  b  ");
	bishop1.setChessLabel("[b1]");
	initialRow = 1;
	initialChar = 'C';
	initialCol = (initialChar - '0') - 9;
	bishop1.setSpot(initialRow + 5, initialCol);
	bishop1.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 5, initialCol, bishop1.getLabel());
	chess.setSecondBoard(initialRow + 5, initialCol, bishop1.getLabel());
	chess.setChessBoard(initialRow + 5, initialCol, bishop1.getChessLabel());
	// Bishop2 initial info.
	bishop2.setLabel("  b  ");
	bishop2.setChessLabel("[b2]");
	initialRow = 1;
	initialChar = 'F';
	initialCol = (initialChar - '0') - 9;
	bishop2.setSpot(initialRow + 5, initialCol);
	bishop2.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 5, initialCol, bishop2.getLabel());
	chess.setSecondBoard(initialRow + 5, initialCol, bishop2.getLabel());
	chess.setChessBoard(initialRow + 5, initialCol, bishop2.getChessLabel());
	// Knight1 initial info.
	knight1.setLabel("  n  ");
	knight1.setChessLabel("[n1]");
	initialRow = 1;
	initialChar = 'B';
	initialCol = (initialChar - '0') - 9;
	knight1.setSpot(initialRow + 5, initialCol);
	knight1.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 5, initialCol, knight1.getLabel());
	chess.setSecondBoard(initialRow + 5, initialCol, knight1.getLabel());
	chess.setChessBoard(initialRow + 5, initialCol, knight1.getChessLabel());
	// Knight2 initial info.
	knight2.setLabel("  n  ");
	knight2.setChessLabel("[n2]");
	initialRow = 1;
	initialChar = 'G';
	initialCol = (initialChar - '0') - 9;
	knight2.setSpot(initialRow + 5, initialCol);
	knight2.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 5, initialCol, knight2.getLabel());
	chess.setSecondBoard(initialRow + 5, initialCol, knight2.getLabel());
	chess.setChessBoard(initialRow + 5, initialCol, knight2.getChessLabel());
	// Queen initial info.
	queen.setLabel("  q  ");
	queen.setChessLabel("[q1]");
	initialRow = 1;
	initialChar = 'D';
	initialCol = (initialChar - '0') - 9;
	queen.setSpot(initialRow + 5, initialCol);
	queen.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 5, initialCol, queen.getLabel());
	chess.setSecondBoard(initialRow + 5, initialCol, queen.getLabel());
	chess.setChessBoard(initialRow + 5, initialCol, queen.getChessLabel());
	// King initial info.
	king.setLabel("  k  ");
	king.setChessLabel("[k1]");
	initialRow = 1;
	initialChar = 'E';
	initialCol = (initialChar - '0') - 9;
	king.setSpot(initialRow + 5, initialCol);
	king.setSecondSpot(initialRow + 3, initialCol);
	chess.setBoard(initialRow + 5, initialCol, king.getLabel());
	chess.setSecondBoard(initialRow + 5, initialCol, king.getLabel());
	chess.setChessBoard(initialRow + 5, initialCol, king.getChessLabel());
	// Prints the initial version of the board.
	chess.printInitialBoard(initialRow, initialCol);
	
	// Loops the simulation.
	for (int loop = 0; loop < 100; loop++)
	{
		beginningLoop:
		// Displays the user options for the simulation.
		chess.Piece::pieceOptions();
		cin >> charCol >> numRow;
		
		// Starts a new simulation if the user eters N9.
		if (charCol == 'N' && numRow == 9)
		{
			cout << "\n" << "Chess Silumation Ended...";
			cout << "\n" << "New Simulation Initializing..." << "\n";
			goto newGame;
		}
		
		// Ends the simulation if the user enters X0.
		if (charCol == 'X' && numRow == 0)
		{
			cout << "\n" << "Chess Silumation Ended..." << "\n";
			return 0;
		}
		
		// Input validation for charCol and numRow.
		while ((charCol != 'A' && charCol != 'B' && charCol != 'C' && charCol != 'D' && charCol != 'E' && charCol != 'F' && charCol != 'G' && charCol != 'H') || (numRow != 1 && numRow != 2 && numRow != 3 && numRow != 4 && numRow != 5 && numRow != 6 && numRow != 7 && numRow != 8))
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\n" << "Your entry should be a capital letter (A-H) followed by a number (1-8). Try again!" << endl;
			cout << "\n" << "Your move: ";
			cin >> charCol >> numRow;
		}
		// Converts the input to match the board.
		numRow = 7 - numRow;
		numCol = (charCol - '0') - 9;
		
		if (chess.Piece::gameboard[numRow][numCol] == "[  ]")
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\n" << "That is not a valid piece to move. Try again!";
			goto beginningLoop;
		}
		
		// Prints the first version of the board.
		retry = chess.printFirstBoard(numRow, numCol);
		
		// If there is no place to move the piece the user selected, they get to retry and enter a new piece to move.
		if (retry == 1)
		{
			cin.clear();
			cin.ignore(100, '\n');
			goto beginningLoop;
		}
		
		// Displays the user options for the simulation.
		chess.Piece::moveOptions();
		cin >> newChar >> newRow;
		
		// Starts a new simulation if the user eters N9.
		if (newChar == 'N' && newRow == 9)
		{
			cout << "\n" << "Chess Silumation Ended..." << endl;
			cout << "\n" << "New Simulation Initializing..." << "\n";
			goto newGame;
		}
		
		// Ends the program if the user enters X0.
		if (newChar == 'X' && newRow == 0)
		{
			cout << "\n" << "Chess Silumation Ended..." << "\n";
			return 0;
		}
		
		// Input validation for newChar and newRow.
		while ((newChar != 'A' && newChar != 'B' && newChar != 'C' && newChar != 'D' && newChar != 'E' && newChar != 'F' && newChar != 'G' && newChar != 'H') || (newRow != 1 && newRow != 2 && newRow != 3 && newRow != 4 && newRow != 5 && newRow != 6 && newRow != 7 && newRow != 8))
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\n" << "Your entry should be a capital letter (A-H) followed by a number (1-8). Try again!" << endl;
			cout << "\n" << "Your move: ";
			cin >> newCol >> newRow;
		}
		// Converts the input to match the board.
		newRow = 7 - newRow;
		newCol = (newChar - '0') - 9;
		
		// Input validation for the next move, newRow and newCol must be at an X.
		while (chess.board[newRow][newCol] != "  X  ")
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "\n" << "Legal moves are indicated by an X. Try again!" << endl;
			cout << "\n" << " Your move: ";
			cin >> newChar >> newRow;
			// Converts the input to match the board.
			newRow = 7 - newRow;
			newCol = (newChar - '0') - 9;
		}
		
		// Moves PAWN1 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[p1]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[p1]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, pawn1.getLabel());
			pawn1.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, pawn1.getLabel());
		}
		// Moves PAWN2 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[p2]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[p2]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, pawn2.getLabel());
			pawn2.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, pawn2.getLabel());
		}
		// Moves PAWN3 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[p3]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[p3]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, pawn3.getLabel());
			pawn3.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, pawn3.getLabel());
		}
		// Moves PAWN4 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[p4]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[p4]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, pawn4.getLabel());
			pawn4.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, pawn4.getLabel());
		}
		// Moves PAWN5 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[p5]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[p5]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, pawn5.getLabel());
			pawn5.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, pawn5.getLabel());
		}
		// Moves PAWN6 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[p6]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[p6]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, pawn6.getLabel());
			pawn6.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, pawn6.getLabel());
		}
		// Moves PAWN7 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[p7]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[p7]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, pawn7.getLabel());
			pawn7.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, pawn7.getLabel());
		}
		// Moves PAWN8 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[p8]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[p8]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, pawn8.getLabel());
			pawn8.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, pawn8.getLabel());
		}
		// Moves ROOK1 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[r1]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[r1]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, rook1.getLabel());
			rook1.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, rook1.getLabel());
		}
		// Moves ROOK2 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[r2]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[r2]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, rook2.getLabel());
			rook2.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, rook2.getLabel());
		}
		// Moves BISHOP1 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[b1]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[b1]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, bishop1.getLabel());
			bishop1.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, bishop1.getLabel());
		}
		// Moves BISHOP2 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[b2]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[b2]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, bishop2.getLabel());
			bishop2.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, bishop2.getLabel());
		}
		// Moves KNIGHT1 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[n1]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[n1]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(newRow, newCol, knight1.getLabel());
			knight1.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, knight1.getLabel());
		}
		// Moves KNIGHT2 to the selected place.
		if (chess.gameboard[numRow][numCol] == "[n2]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[n2]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, knight2.getLabel());
			knight2.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, knight2.getLabel());
		}
		// Moves QUEEN to the selected place.
		if (chess.gameboard[numRow][numCol] == "[q1]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[q1]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, queen.getLabel());
			queen.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, queen.getLabel());
		}
		// Moves KING to the selected place.
		if (chess.gameboard[numRow][numCol] == "[k1]")
		{
			numberedMoves.setLabel("     ");
			numberedMoves.setChessLabel("[  ]");
			numberedMoves.setChessSpot(numRow, numCol);
			chess.setChessBoard(numRow, numCol, numberedMoves.getChessLabel());
			chess.setFirstBoard(numRow, numCol, numberedMoves.getLabel());
			chess.setSecondBoard(numRow, numCol, numberedMoves.getLabel());
			selected.setChessLabel("[k1]");
			selected.setChessSpot(newRow, newCol);
			chess.setChessBoard(newRow, newCol, selected.getChessLabel());
			chess.setSecondBoard(newRow, newCol, king.getLabel());
			king.setSpot(newRow, newCol);
			chess.setBoard(newRow, newCol, king.getLabel());
		}
		// Clears the X marks on the boards.
		chess.clearXMarks();
		// Prints the second version of the board.
		chess.printSecondBoard();
	}
	return 0;
}