#include <iostream>
#include <math.h>
#include "Board.h"

using namespace std;

int main() {
	int move;
	char token;
	bool game_over = false;
	Board board;
	
	board.print_locations();
	cout << "X or Y?: ";
	cin >> token;
	while (game_over == false) {
		cout << "where would you like to place your token?: ";
		cin >> move;

		board.set_piece(floor(move / 3), move % 3, token);
		board.print_board();
	}
	return 0;
}