#pragma once
#include <list>
#include "Figure.h"

class HorizontalLine: public Figure
{
public:
	// constructor
	HorizontalLine(int xLeft, int xRight, int y, char symbol);
};

