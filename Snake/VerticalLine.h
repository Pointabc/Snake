#pragma once
#include <list>
#include "Figure.h"

class VerticalLine: public Figure
{
public:
	VerticalLine(int x, int yTop, int yBottom, char symbol);
};

