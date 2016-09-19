#include <iostream>
#include "Board.h"

using namespace std;

Board::Board(){
	char board[3][3];
	resetBoard();
}


Board::~Board(){
}

//sets all the values in the board array to their inital value of 0
void Board::resetBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = ' ';
		}
	}
}

//prints out the board to the console 
void Board::print_board() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << board[i][j] << "|";
		}
		cout << board[i][2];
		if (i == 2) {
			cout << endl;
			return;
		}
		cout <<  "\n-----\n";
	}
}

//sets an y,x position on the board to a piece number
void Board::set_piece(int x, int y, char piece) {
	if (board[x][y] == ' ') {
			board[x][y] = piece;
	}
	else {

	}
}

//prints out the numbers for the positions on the board
void Board::print_locations() {
	cout << "0|1|2" << endl;
	cout << "-----" << endl;
	cout << "3|4|5" << endl;
	cout << "-----" << endl;
	cout << "6|7|8" << endl;
}