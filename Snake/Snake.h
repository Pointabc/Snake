#pragma once
#include "Figure.h"

class Snake: public Figure
{
private:
	direction _direction;
protected:
public:
	Snake(Point tail, int length, direction directn);
	void Move();
	void HandleKey(int key);
	bool Eat(Point point);
	bool IsHitSnake();
};

