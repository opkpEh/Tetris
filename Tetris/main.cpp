#include <raylib.h>
#include "game.h"

double lastUpdateTime = 0;

bool EventTriggered(double interval) {
	
	double currentTime = GetTime();
	if (currentTime - lastUpdateTime >= interval)
	{
		lastUpdateTime = currentTime;
		return true;
	}
	return false;
}

int main()
{

	Color darkBlue = { 44, 44, 127, 255 };

	InitWindow(300,600, "Tetris");
	SetWindowState(FLAG_VSYNC_HINT);

	Game game = Game();

	while (!WindowShouldClose())
	{
		game.HandelInput();

		if (EventTriggered(0.5))
		{
			game.MoveBlockDown();
		}

		BeginDrawing();
		ClearBackground(darkBlue);
		DrawFPS(10,10);
		game.Draw();
		EndDrawing();
	}

	CloseWindow();
	return 0;
}