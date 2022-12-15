#include "Direction.h"

SDirection::SDirection(direction directn)
{
	_direction = directn;
}

direction SDirection::GetValue()
{
	return _direction;
}

void SDirection::SetValue(direction directn)
{
	_direction = directn;
}
