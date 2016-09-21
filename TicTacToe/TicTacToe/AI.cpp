#include "AI.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;


AI::AI()
{
	srand(time(NULL));
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
//first checks if there is a move it can make to win the next turn
//If it cannot win on the next turn it checks to see if it needs to block the player from winning on the next turn
//If neither the player or the ai can win in the next turn it picks a random position.
int AI::get_move(Board board, char token) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			Board nextBoard = board;
			nextBoard.set_piece(i, j, m_token);
			if (nextBoard.get_game_state()) {
				return (3 * i) + j;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			Board nextBoard = board;
			nextBoard.set_piece(i, j, token);
			if (nextBoard.get_game_state()) {
				return (3 * i) + j;
			}
		}
	}
	int random_move =  rand() % 9;
	while (!board.set_piece((int)floor(random_move / 3), random_move % 3, token)) {
		 random_move = rand() % 9;
	}
	return random_move;
}
