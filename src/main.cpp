#include <iostream>
#include "raylib.h"

int main() {
	std::cout << "HELLO WORLD!" << std::endl;

	InitWindow(800, 800, "DECCER 1");


	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);

		DrawText("HELLO RAYLIB!", 50, 50, 14, BLACK);

		EndDrawing();
	}

	CloseWindow();

	return 0;
}
