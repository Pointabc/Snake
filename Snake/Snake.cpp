#include "Snake.h"

Snake::Snake(Point tail, int length, direction directn)
{
	_direction = directn;
	for (int i = 0; i < length; i++)
	{
		Point p(tail);
		p.Move(i, _direction);
		pList.push_back(p);
	}
}

void Snake::Move()
{
	//delete tail
	Point tail = pList.front();
	tail.Clear();
	pList.pop_front();
	//Add new head
	Point new_head = pList.back();
	new_head.Move(1, _direction);
	pList.push_back(new_head);
	new_head.Draw();
}

void Snake::HandleKey(int key)
{
	switch (key)
	{
	case KEY_ARROW_UP:
		_direction = UP;
		break;
	case KEY_ARROW_RIGHT:
		_direction = RIGHT;
		break;
	case KEY_ARROW_DOWN:
		_direction = DOWN;
		break;
	case KEY_ARROW_LEFT:
		_direction = LEFT;
		break;
	}
}

bool Snake::Eat(Point food)
{
	Point new_head = pList.back();
	new_head.Move(1, _direction);

	if (new_head.IsHit(food))
	{
		pList.push_back(new_head);
		return true;
	}

	return false;
}

bool Snake::IsHitSnake()
{
	Point head = pList.back();
	std::list<Point>::iterator it = pList.end()--;
	it--;
	//for (auto i = pList.begin(); i != --pList.end(); i++)
	for (auto i = pList.begin(); i != it; i++)
	{
		if (head.IsHit(*i))
			return true;
	}

	return false;
}
