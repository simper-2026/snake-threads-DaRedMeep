#pragma once
#include "GameRunner.h"
class ConsoleDisplay
{
private:
	GameRunner* game;

public:
	ConsoleDisplay(GameRunner* g);
	void Run();
};

