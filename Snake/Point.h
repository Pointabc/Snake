#pragma once
class Point
{
protected:
	int _x;
	int _y;
	char _symbol;
public:
	// constructor
	Point(int x, int y, int symbol);
	Point();
	// draw point
	void Draw();
	void SetCursorPosition(int x, int y);
};

