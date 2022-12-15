#pragma once
#include <list>
#include "Point.h"

class Figure
{
private:
protected:
	std::list<Point> pList;
public:
	void Draw();
	bool IsHit(Figure figure);
	bool IsHit(Point point);
};

