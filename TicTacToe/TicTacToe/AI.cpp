#include "AI.h"
#include <iostream>

using namespace std;


AI::AI()
{
	char m_token;
}


AI::~AI()
{
}

//sets the AI token
void AI::set_token(char token) {
	m_token = token;
}

char AI::get_token() {
	return m_token;
}

//gets the AI's next move
int AI::get_move(Board board) {

	//board.set_piece(1, 1, m_token);
	//board.print_board();
	return 0;
}
