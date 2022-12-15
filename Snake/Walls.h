#pragma once
#include <list>
#include "Figure.h"
#include "HorizontalLine.h"
#include "VerticalLine.h"

class Walls
{
private:
	std::list<Figure> wallList;
public:
	Walls(int mapWidth, int mapHeight);
	void Draw();
	bool IsHit(Figure figure);
};

