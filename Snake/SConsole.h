#pragma once
#include <windows.h>

// class for setup console
class SConsole
{
private:
	int _width;
	int _height;
	HANDLE _hConsole;
public:
	SConsole(int width, int height);
	//SetResolution(int width, int height);
};

