#include "Board.h"
#include "Team.h"

using namespace std;

Board::Board(int bg, Point p, vector<Piece*> cp) : BG(bg), P(p), Safe(false) {
	CP = cp;
}

Board::Board(Player& P) {
	BG = P.Clr;
	Safe = true;
}
Board::Board() {

}

void Board::setPlayer(Player& P) {
	BG = P.Clr;
	Safe = true;
}

void Board::Draw() {

}

void Board::SetPoint(Point p) {
	P = p;
}

void Board::MakeSafe() {
	Safe = true;
}

int Board::NPcs() {
	return CP.size();
}

bool Board::ValidPiece(Team T) {
	for (int i = 0; i < CP.size(); i++) {
		if (CP[i]->IsMyPiece(T) == true)
			return true;
	}
	return false;
}

bool Board::ValidPiece(Player P) {
	for (int i = 0; i < CP.size(); i++) {
		if (P.Clr == (*CP[i]).Clr)
			return true;
	}
	return false;
}

bool Board::IsSafe() {
	return Safe;
}
