#include "HorizontalLine.h"

HorizontalLine::HorizontalLine(int xLeft, int xRight, int y, char symbol)
{
	for (int x = xLeft; x <= xRight; x++)
	{
		pList.push_back(Point(x, y, symbol));
	}
}