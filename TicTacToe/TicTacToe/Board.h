#pragma once
class Board
{
public:
	Board();
	~Board();
	void resetBoard();
	void print_board();
	void set_piece(int x, int y, char piece);
	void print_locations();
	bool get_game_state();
private:
	char board[3][3];
};


