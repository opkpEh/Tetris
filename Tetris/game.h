#pragma once
#include "blocks.cpp"
#include "grid.h"

class Game {

public:
	Game();
	Block GetRandomBlock();
	std::vector<Block> GetAllBlocks();
	void Draw();
	void HandelInput();
	void MoveBlockLeft();
	void MoveBlockRight();
	void MoveBlockDown();
	Grid grid;

private:
	std::vector<Block> blocks;
	Block currentBlock;
	Block nextBlock;
};