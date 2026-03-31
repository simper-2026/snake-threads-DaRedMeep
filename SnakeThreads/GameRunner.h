#pragma once
#include "Direction.h"
#include <atomic>
#include "Point.h"
#include "GameState.h"


class GameRunner
{
private:
	std::atomic<Direction> playerDirection;
	std::atomic<bool> isRunning;
	GameState buffer[2];
	GameState* current;
	GameState* next;
	void SwapBuffer();
public:
	GameRunner();
	void Tick();
	void SetDirection(Direction d);
	void Run();
	void Quit();
	bool IsRunning();
	GameState* GetBuffer();
};

