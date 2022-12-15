#pragma once

enum direction { LEFT, RIGHT, UP, DOWN, NA };
direction sdirection;

class SDirection
{
private:
	direction _direction;
public:
	SDirection(direction directn);
	direction GetValue();
	void SetValue(direction directn);
};

