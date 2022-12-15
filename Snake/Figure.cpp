#include "Figure.h"

void Figure::Draw()
{
	for (auto i = pList.begin(); i != pList.end(); i++)
	{
		(*i).Draw();
	}
}

bool Figure::IsHit(Figure figure)
{
	for (auto i = pList.begin(); i != pList.end(); i++)
	{
		if (figure.IsHit(*i))
			return true;
	}

	return false;
}

bool Figure::IsHit(Point point)
{
	for (auto i = pList.begin(); i != pList.end(); i++)
	{
		if (point.IsHit(*i))
			return true;
	}

	return false;
}
