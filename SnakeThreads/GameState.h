#pragma once
#include "point.h"

class GameState
{
private:
	int boardSize;
public:
	GameState();
	Point player;
	int GetBoardSize();
};
