#include <iostream>
#include <math.h>
#include "Board.h"
#include "TicTacToe.h"
#include "AI.h"

using namespace std;

int main() {
	char token;
	int move;
	int turn = 0;
	bool game_over = false;
	Board board;
	
	board.print_locations();
	cout << "X or Y?: ";
	cin >> token;

	AI ai;
	ai.set_token('a');
	ai.get_move(board);

	while (game_over == false) {

		//if the current turn number is dividable by 2 then it is the players turn otherwise the ai goes
		if (turn % 2 == 0) {
			move = -1;
			//while the current players move is not on the board, the player is repeatedly asked to give a valid move.
			while (move > 8 || move < 0) {
				cout << "Where would you like to place your token?: ";
				cin >> move;
				if (move <= 8 && move >= 0) {
					board.set_piece((int)floor(move / 3), move % 3, token);
				}
				else {
					cout << "Please enter a valid location.\n";
				}
			}
		}
		else {
			move = ai.get_move(board);
			board.set_piece((int)floor(move / 3), move % 3, ai.get_token());
		}
		turn++;
		board.print_board();
		game_over = board.get_game_state();
		}
	cout << "The game has ended\n";
	return 0;
}