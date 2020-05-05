#include "Player.h"

Player::Player(string& N, int C, int NOP) : Name(N), Clr(C)
{
	Home = new Board(*this);	
}

Board& Player::operator[](int i)
{
	return Home[i];
}

int Player::CurrIndex(Piece* FP)
{
	for (int i = 0; i < 6; i++)
	{
		if (this->Home[i] == FP)
			return i;
	}
	return 0;
}

int Player::PiecesLeft()
{
	return 0;
}

