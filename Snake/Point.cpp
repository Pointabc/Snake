#include <windows.h>
#include <iostream>
#include "Point.h"


// constructors
Point::Point(int x, int y, int symbol)
{
	_x = x; _y = y; _symbol = symbol; //pdirection = NA;
}
Point::Point(Point* p)
{
	_x = p->_x; _y = p->_y; _symbol = p->_symbol;
}

// Draw point (symbol)
void Point::Draw()
{
	// set position and draw symbol
	SetCursorPosition(_x, _y);
	std::cout << _symbol;

}

void Point::Move(int offset, direction directn)
{
	switch (directn)
	{
	case LEFT:
		if (_x > 0)
			_x -= offset;
		break;
	case RIGHT:
		if (_x < 78)
			_x += offset;
		break;
	case UP:
		if (_y > 0)
			_y -= offset;
		break;
	case DOWN:
		if (_y < 24)
			_y += offset;
		break;
	case NA:
		break;
	default:
		break;
	}
}

void Point::Clear()
{
	_symbol = ' ';
	Draw();
}

bool Point::IsHit(Point point)
{
	return (this->_x == point._x) && (this->_y == point._y);
}

bool Point::IsEqual(Point point)
{	
	return (this->_x == point._x) && (this->_y == point._y) && (this->_symbol == point._symbol);
}

// need create class Monitor or TextMode
void Point::SetCursorPosition(int x, int y)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// set position and draw symbol
	COORD position = { x, y }; //позиция x и y
	SetConsoleCursorPosition(hConsole, position);
}
