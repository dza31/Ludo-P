#pragma once
#include "Point.h"
#include "Piece.h"
#include"Player.h"
#include<vector>

using namespace std;

class Board
{
	friend class Player;
	friend class Piece;
protected:
	Point P;
	vector<Piece*> CP;
	int BG;
	bool Safe;
public:
	Board();
	Board(int bg, Point p, vector<Piece*> cp);
	Board(Player& P);
	void setPlayer(Player&);
	void Draw();
	void SetPoint(Point);
	void MakeSafe();
	int NPcs();
	bool ValidPiece(Team T); //use loop to check through the vector array
	bool ValidPiece(Player P);
	bool IsSafe();
};

