#pragma once
#include "Board.h"
class AI
{
public:
	AI();
	~AI();
	int get_move(Board board, char token);
	void AI::set_token(char token);
	char get_token();
private:
	char m_token;
};

