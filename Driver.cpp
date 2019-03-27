#include <iostream>
#include <conio.h>
#include "Puzzle.h"

using namespace std;

int main() {
	Puzzle lucasJumps;
	int move = 0;
	char board[7] = { 'B', 'B','B', 'X', 'R','R','R' };

	
		lucasJumps.printBoard(board);
		while (lucasJumps.isBoardSolved(board) == false) {
		cout << "what piece would you like to move?: " << endl;
		cin >> move;

		lucasJumps.move(move, board);
		lucasJumps.printBoard(board);
		if (lucasJumps.isBoardGimped(board) == true && lucasJumps.isBoardSolved(board) == false) {
			cout << "congrats you gimped it!" << endl;
			break;
		}
		else if (lucasJumps.isBoardSolved(board) == true) {
			cout << "congrats you solved it!" << endl;
		}
		}

		cout << "Game Over!" << endl;
	_getch();
	return 0;
}
