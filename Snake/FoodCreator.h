#pragma once
#include <cstdlib>
#include <ctime>
#include "Point.h"

class FoodCreator
{
private:
	int mapWidth;
	int mapHeight;
	char symbol;

public:
	FoodCreator(int mapWidth, int mapHeight, char symbol);
	Point CreateFood();
};

