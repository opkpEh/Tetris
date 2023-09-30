#include <raylib.h>
#include "game.h"

int main()
{

	Color darkBlue = { 44, 44, 127, 255 };

	InitWindow(300,600, "Tetris");
	SetWindowState(FLAG_VSYNC_HINT);

	Game game = Game();

	while (!WindowShouldClose())
	{
		game.HandelInput();

		BeginDrawing();
		ClearBackground(darkBlue);
		DrawFPS(10,10);
		game.Draw();
		EndDrawing();
	}

	CloseWindow();
	return 0;
}