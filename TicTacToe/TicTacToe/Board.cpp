#include <iostream>
#include "Board.h"

using namespace std;

Board::Board(){
	char board[3][3];
	resetBoard();
}


Board::~Board(){
}

//sets all the values in the board array to their initial value of ' '
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
			cout << "\n\n";
			return;
		}
		cout <<  "\n-----\n";
	}
}

//sets an y,x position on the board to a token
bool Board::set_piece(int x, int y, char token) {
	if (board[x][y] == ' ') {
			board[x][y] = token;
			return true;
	}
	else {
		return false;
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


//checks to see if the game has been won
bool Board::get_game_state() {
	for (int i = 0; i < 3; i++) {
		if (board[i][0] != ' ') {
			if (board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
				return true;
			}
		}
		if (board[0][i] != ' ') {
			if (board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
				return true;
			}
		}
	}
	if (board[1][1] != ' ') {
		if (board[1][1] == board[0][0] && board[1][1] == board[2][2]) {
			return true;
		}
		if (board[1][1] == board[0][2] && board[1][1] == board[2][0]) {
			return true;
		}
	}
	return false;
}