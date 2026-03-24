#include "ConsoleDisplay.h"
#include <thread>
#include <chrono>

using namespace std;

ConsoleDisplay::ConsoleDisplay(GameRunner* g)
{
	game = g;
}

void ConsoleDisplay::Run()
{
	while (game->IsRunning()) {
		// CheckInput();

		this_thread::sleep_for(chrono::milliseconds(50));
	}
}
