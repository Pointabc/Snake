#include "FoodCreator.h"

FoodCreator::FoodCreator(int mapWidth, int mapHeight, char symbol)
{
	this->mapWidth = mapWidth;
	this->mapHeight = mapHeight;
	this->symbol = symbol;
}

Point FoodCreator::CreateFood()
{
	srand(time(0));
	int x = 3 + rand() % (mapWidth-2);
	int y = 3 + rand() % (mapHeight - 2);
	return Point(x, y, symbol);
}
