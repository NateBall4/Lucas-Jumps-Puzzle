#ifndef PUZZLE
#define PUZZLE

class Puzzle {
private:

	public:
		void printBoard(char*);
		int move(int, char*);
		bool isBoardSolved(char*);
		bool isBoardGimped(char*);

};

#endif
