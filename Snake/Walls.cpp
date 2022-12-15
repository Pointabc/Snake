#include "Walls.h"

Walls::Walls(int mapWidth, int mapHeight)
{
	// Create map
	HorizontalLine upLine(0, mapWidth-2, 0, '#');
	HorizontalLine downLine(0, mapWidth-2, mapHeight-1, '#');
	VerticalLine leftLine(0, 0, mapHeight-1, '#');
	VerticalLine rightLine(mapWidth-2, 0, mapHeight-1, '#');

	wallList.push_back(upLine);
	wallList.push_back(downLine);
	wallList.push_back(leftLine);
	wallList.push_back(rightLine);
}

void Walls::Draw()
{
	for (auto i = wallList.begin(); i != wallList.end(); i++)
	{
		(*i).Draw();
	}
}

bool Walls::IsHit(Figure figure)
{
	for (auto i = wallList.begin(); i != wallList.end(); i++)
	{
		if ((*i).IsHit(figure))
			return true;
	}

	return false;
}
