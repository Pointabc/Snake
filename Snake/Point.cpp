#include <windows.h>
#include <iostream>
#include "Point.h"

// constructors
Point::Point(int x, int y, int symbol)
{
	_x = x; _y = y; _symbol = symbol;
}
Point::Point()
{
	_x = 0; _y = 0; _symbol = 0;
}

// Draw point (symbol)
void Point::Draw()
{
	// set position and draw symbol
	SetCursorPosition(_x, _y);
	std::cout << _symbol;

}

void Point::SetCursorPosition(int x, int y)
{
	// set position and draw symbol
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = { x, y }; //позиция x и y
	SetConsoleCursorPosition(hConsole, position);
}
