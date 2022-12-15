#pragma once
#include "Enums.h"

class Point
{
private:
	int _x;
	int _y;
	char _symbol;

	void SetCursorPosition(int x, int y);
public:
	// constructors
	Point(int x, int y, int symbol);
	Point(Point* p);
	// draw point
	void Draw();

	void Move(int offset, direction directn);
	void Clear();
	bool IsHit(Point point);
	bool IsEqual(Point point);
};

