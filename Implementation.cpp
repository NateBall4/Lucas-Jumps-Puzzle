#include <iostream>
#include <iomanip>
#include <stdio.h>
#include "Puzzle.h"

using namespace std;

void Puzzle::printBoard(char* board) {
	for (int i = 0; i < 7; i++) {
		cout << setw(3) << board[i];
	}
	cout << endl;
	for (int i = 0; i < 7; i++) {
		cout << setw(3) << i;
	}
	cout << endl;
}

int Puzzle::move(int move, char* board) {

	if (board[move - 1] == 'X'  && board[move] == 'R') {
		board[move - 1] = board[move];
		board[move] = 'X';
	}
	else if(board[move - 2] == 'X'  && board[move] == 'R') {
		board[move - 2] = board[move];
		board[move] = 'X';
	}
	else if (board[move + 1] == 'X' && board[move] == 'B') {
		board[move + 1] = board[move];
		board[move] = 'X';
	}
	else if (board[move + 2] == 'X' && board[move] == 'B') {
		board[move + 2] = board[move];
		board[move] = 'X';
	}
	else {
		cout << "that is an invalid move" << endl;
	}

	return move;
}

bool Puzzle::isBoardSolved(char* board) {
	int counter = 0;
	for (int i = 0; i < 7; i++) {
	
			if (board[i] == 'R' && i < 3) {
				counter++;
			}
			else if (board[i] == 'X' && i == 3) {
				counter++;
			}
			else if (board[i] == 'B' && i < 7 && i > 3) {
				counter++;
			}
			else {
				counter = 0;
			}
	}
	if (counter == 7) {
		return true;
	}
	else {
		return false;
	}
}

bool Puzzle::isBoardGimped(char* board) {
	int x = 0;
	
	for (int i = 0; i < 7; i++) {
		if (board[i] != 'X') {
			x++;
		}
		else {
			break;
		}
	}

	if (board[x - 1] == 'B') {
		return false;
	}
	else if (board[x - 2] == 'B') {
		return false;
	}
	else if (board[x + 1] == 'R') {
		return false;
	}
	else if (board[x + 2] == 'R') {
		return false;
	}
	

	return true;
}
