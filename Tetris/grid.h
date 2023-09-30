#pragma once
#include <vector>
#include "raylib.h"
class Grid {

public:
	Grid();
	void Initialize();
	void Print();
	int grid[20][10];
	bool IsCellOutside(int row, int column);
	bool IsCellEmpty(int row, int column);
	void Draw();

private:
	int numRows;
	int numCols;
	int cellSize;
	std::vector<Color> colors;

};