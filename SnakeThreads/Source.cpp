#include "KeyboardInput.h"
#include "GameRunner.h"
#include <thread>
#include <chrono>

using namespace std;

int main() {

	GameRunner game;
	KeyboardInput input(&game);


	input.CheckInput();
	game.Tick();

	thread inputThread(&KeyboardInput::Run, &input);
	thread gameThread(&GameRunner::Run, &game);

	inputThread.join();
	gameThread.join();
}
