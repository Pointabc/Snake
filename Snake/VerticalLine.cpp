#include "VerticalLine.h"

VerticalLine::VerticalLine(int x, int yTop, int yBottom, char symbol)
{
	for (int y = yTop; y <= yBottom; y++)
	{
		pList.push_back(Point(x, y, symbol));
	}
}